#include "gui_key_derivation_request_widgets.h"
#include "gui.h"
#include "gui_page.h"
#include "librust_c.h"
#include "keystore.h"

typedef struct KeyDerivationWidget
{
    uint8_t currentTile;
    PageWidget_t *pageWidget;
    lv_obj_t *tileView;
    lv_obj_t *cont;
    lv_obj_t *qrCode;
} KeyDerivationWidget_t;

typedef enum
{
    TILE_APPROVE,
    TILE_QRCODE,

    TILE_BUTT,
} PAGE_TILE;

static void *g_data;
static void *g_urResult;
static bool g_isMulti;
static KeyDerivationWidget_t g_keyDerivationTileView;
static QRHardwareCallData *g_callData;

static void GuiCreateApproveWidget(lv_obj_t *parent);
static void GuiCreateQRCodeWidget(lv_obj_t *parent);
static void OnApproveHandler(lv_event_t *e);
static void OnReturnHandler(lv_event_t *e);
static Ptr_Response_QRHardwareCallData ModelParseQRHardwareCall();
static UREncodeResult *ModelGenerateSyncUR(void);
static uint8_t GetXPubIndexByPath(char *path);

void GuiSetKeyDerivationRequestData(void *data, bool is_multi)
{
#ifndef COMPILE_SIMULATOR
    g_urResult = data;
    g_isMulti = is_multi;
    g_data = g_isMulti ? ((URParseMultiResult *)g_urResult)->data : ((URParseResult *)g_urResult)->data;
#endif
}

void GuiKeyDerivationRequestInit()
{
    GUI_PAGE_DEL(g_keyDerivationTileView.pageWidget);
    g_keyDerivationTileView.pageWidget = CreatePageWidget();
    g_keyDerivationTileView.cont = g_keyDerivationTileView.pageWidget->contentZone;
    SetNavBarLeftBtn(g_keyDerivationTileView.pageWidget->navBarWidget, NVS_BAR_RETURN, CloseCurrentViewHandler, NULL);
    SetWallet(g_keyDerivationTileView.pageWidget->navBarWidget, WALLET_LIST_ETERNL, NULL);
    lv_obj_t *tileView = lv_tileview_create(g_keyDerivationTileView.cont);
    lv_obj_clear_flag(tileView, LV_OBJ_FLAG_SCROLLABLE);
    if (GuiDarkMode())
    {
        lv_obj_set_style_bg_color(tileView, BLACK_COLOR, LV_PART_MAIN);
    }
    else
    {
        lv_obj_set_style_bg_color(tileView, WHITE_COLOR, LV_PART_MAIN);
    }
    lv_obj_set_style_bg_opa(tileView, LV_OPA_0, LV_PART_SCROLLBAR & LV_STATE_SCROLLED);
    lv_obj_set_style_bg_opa(tileView, LV_OPA_0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    lv_obj_t *tile = lv_tileview_add_tile(tileView, TILE_APPROVE, 0, LV_DIR_HOR);
    GuiCreateApproveWidget(tile);

    tile = lv_tileview_add_tile(tileView, TILE_QRCODE, 0, LV_DIR_HOR);
    GuiCreateQRCodeWidget(tile);

    g_keyDerivationTileView.currentTile = TILE_APPROVE;
    g_keyDerivationTileView.tileView = tileView;

    lv_obj_set_tile_id(g_keyDerivationTileView.tileView, g_keyDerivationTileView.currentTile, 0, LV_ANIM_OFF);
}
void GuiKeyDerivationRequestDeInit()
{
    GUI_PAGE_DEL(g_keyDerivationTileView.pageWidget);
}
void GuiKeyDerivationRequestRefresh()
{
}
void GuiKeyDerivationRequestNextTile()
{
    g_keyDerivationTileView.currentTile++;
    switch (g_keyDerivationTileView.currentTile)
    {
    case TILE_QRCODE:
        SetNavBarLeftBtn(g_keyDerivationTileView.pageWidget->navBarWidget, NVS_BAR_RETURN, OnReturnHandler, NULL);
        break;
    default:
        break;
    }
    lv_obj_set_tile_id(g_keyDerivationTileView.tileView, g_keyDerivationTileView.currentTile, 0, LV_ANIM_OFF);
}
void GuiKeyDerivationRequestPrevTile()
{
    g_keyDerivationTileView.currentTile--;
    switch (g_keyDerivationTileView.currentTile)
    {
    case TILE_APPROVE:
        SetNavBarLeftBtn(g_keyDerivationTileView.pageWidget->navBarWidget, NVS_BAR_RETURN, CloseCurrentViewHandler, NULL);
        break;
    default:
        break;
    }
    lv_obj_set_tile_id(g_keyDerivationTileView.tileView, g_keyDerivationTileView.currentTile, 0, LV_ANIM_OFF);
}

#ifndef COMPILE_SIMULATOR
static Ptr_Response_QRHardwareCallData ModelParseQRHardwareCall()
{
    Ptr_Response_QRHardwareCallData data = parse_qr_hardware_call(g_data);
    g_callData = data->data;
    return data;
}
#else
static Ptr_Response_QRHardwareCallData ModelParseQRHardwareCall()
{
    KeyDerivationSchema schemas[7] = {
        {.algo = "BIP32-ED25519", .key_path = "m/1852'/1815'/0'", .curve = "ED25519"},
        {.algo = "BIP32-ED25519", .key_path = "m/1852'/1815'/1'", .curve = "ED25519"},
        {.algo = "BIP32-ED25519", .key_path = "m/1852'/1815'/2'", .curve = "ED25519"},
        {.algo = "BIP32-ED25519", .key_path = "m/1852'/1815'/3'", .curve = "ED25519"},
        {.algo = "BIP32-ED25519", .key_path = "m/1852'/1815'/4'", .curve = "ED25519"},
        {.algo = "BIP32-ED25519", .key_path = "m/1852'/1815'/5'", .curve = "ED25519"},
        {.algo = "BIP32-ED25519", .key_path = "m/1852'/1815'/6'", .curve = "ED25519"},
    };
    VecFFI_KeyDerivationSchema keyDerivation = {
        .cap = 7,
        .data = &schemas[0],
        .size = 7,
    };
    KeyDerivationRequestData keyRequest = {
        .schemas = &keyDerivation,
    };
    QRHardwareCallData data1 = {
        .call_type = "key_derivation",
        .origin = "Eternl",
        .key_derivation = &keyRequest,
    };
    Response_QRHardwareCallData data = {
        .data = &data1,
        .error_code = 0,
        .error_message = ""};
    g_callData = &data1;
    return &data;
}
#endif

static UREncodeResult *ModelGenerateSyncUR(void)
{
    CSliceFFI_ExtendedPublicKey keys;
    ExtendedPublicKey xpubs[24];
    for (size_t i = 0; i < g_callData->key_derivation->schemas->size; i++)
    {
        KeyDerivationSchema schema = g_callData->key_derivation->schemas->data[i];
        char* xpub = GetCurrentAccountPublicKey(GetXPubIndexByPath(schema.key_path));
        xpubs[i].path = schema.key_path;
        xpubs[i].xpub = xpub;
    }
    keys.data = xpubs;
    keys.size = g_callData->key_derivation->schemas->size;
    uint8_t mfp[4] = {0};
    GetMasterFingerPrint(mfp);
    return generate_key_derivation_ur(mfp, 4, &keys);
}

static uint8_t GetXPubIndexByPath(char *path)
{
    if (strcmp("m/1852'/1815'/1'", path)) return XPUB_TYPE_ADA_1;
    if (strcmp("m/1852'/1815'/2'", path)) return XPUB_TYPE_ADA_2;
    if (strcmp("m/1852'/1815'/3'", path)) return XPUB_TYPE_ADA_3;
    if (strcmp("m/1852'/1815'/4'", path)) return XPUB_TYPE_ADA_4;
    if (strcmp("m/1852'/1815'/5'", path)) return XPUB_TYPE_ADA_5;
    if (strcmp("m/1852'/1815'/6'", path)) return XPUB_TYPE_ADA_6;
    if (strcmp("m/1852'/1815'/7'", path)) return XPUB_TYPE_ADA_7;
    if (strcmp("m/1852'/1815'/8'", path)) return XPUB_TYPE_ADA_8;
    if (strcmp("m/1852'/1815'/9'", path)) return XPUB_TYPE_ADA_9;
    if (strcmp("m/1852'/1815'/10'", path)) return XPUB_TYPE_ADA_10;
    if (strcmp("m/1852'/1815'/11'", path)) return XPUB_TYPE_ADA_11;
    if (strcmp("m/1852'/1815'/12'", path)) return XPUB_TYPE_ADA_12;
    if (strcmp("m/1852'/1815'/13'", path)) return XPUB_TYPE_ADA_13;
    if (strcmp("m/1852'/1815'/14'", path)) return XPUB_TYPE_ADA_14;
    if (strcmp("m/1852'/1815'/15'", path)) return XPUB_TYPE_ADA_15;
    if (strcmp("m/1852'/1815'/16'", path)) return XPUB_TYPE_ADA_16;
    if (strcmp("m/1852'/1815'/17'", path)) return XPUB_TYPE_ADA_17;
    if (strcmp("m/1852'/1815'/18'", path)) return XPUB_TYPE_ADA_18;
    if (strcmp("m/1852'/1815'/19'", path)) return XPUB_TYPE_ADA_19;
    if (strcmp("m/1852'/1815'/20'", path)) return XPUB_TYPE_ADA_20;
    if (strcmp("m/1852'/1815'/21'", path)) return XPUB_TYPE_ADA_21;
    if (strcmp("m/1852'/1815'/22'", path)) return XPUB_TYPE_ADA_22;
    if (strcmp("m/1852'/1815'/23'", path)) return XPUB_TYPE_ADA_23;
    return XPUB_TYPE_ADA_0;
}

static void GuiCreateApproveWidget(lv_obj_t *parent)
{
    Ptr_Response_QRHardwareCallData response = ModelParseQRHardwareCall();

    lv_obj_t *label, *cont, *btn, *pathCont;

    cont = GuiCreateContainerWithParent(parent, 408, 534);
    lv_obj_align(cont, LV_ALIGN_TOP_LEFT, 36, 8);
    lv_obj_add_flag(cont, LV_OBJ_FLAG_CLICKABLE);

    label = GuiCreateIllustrateLabel(cont, _("connect_wallet_key_request_fmt"));
    lv_label_set_text_fmt(label, _("connect_wallet_key_request_fmt"), response->data->origin);
    lv_obj_align(label, LV_ALIGN_TOP_LEFT, 24, 0);

    pathCont = GuiCreateContainerWithParent(cont, 408, 450);
    lv_obj_align(pathCont, LV_ALIGN_TOP_LEFT, 0, 92);
    lv_obj_set_style_radius(pathCont, 24, 0);
    lv_obj_set_style_bg_color(pathCont, WHITE_COLOR, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(pathCont, LV_OPA_12, LV_PART_MAIN);
    lv_obj_add_flag(pathCont, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_flag(pathCont, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_scrollbar_mode(pathCont, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t *line;
    static lv_point_t points[2] = {{0, 0}, {360, 0}};

    for (size_t i = 0; i < response->data->key_derivation->schemas->size; i++)
    {
        cont = GuiCreateContainerWithParent(pathCont, 408, 102);
        lv_obj_align(cont, LV_ALIGN_TOP_LEFT, 0, 102 * i);
        lv_obj_set_style_bg_opa(cont, LV_OPA_0, LV_PART_MAIN);
        char title[24] = {0};
        sprintf(title, "Account-%d", i + 1);
        label = GuiCreateIllustrateLabel(cont, title);
        lv_obj_align(label, LV_ALIGN_TOP_LEFT, 24, 16);
        label = GuiCreateIllustrateLabel(cont, response->data->key_derivation->schemas->data[i].key_path);
        lv_obj_align(label, LV_ALIGN_TOP_LEFT, 24, 56);
        if (i > 0)
        {
            line = GuiCreateLine(cont, points, 2);
            lv_obj_align(line, LV_ALIGN_TOP_LEFT, 24, 101);
        }
    }

    cont = GuiCreateContainerWithParent(parent, 480, 114);
    lv_obj_align(cont, LV_ALIGN_BOTTOM_LEFT, 0, 0);

    btn = GuiCreateBtn(cont, _("Cancel"));
    lv_obj_set_size(btn, 192, 66);
    lv_obj_set_style_bg_color(btn, WHITE_COLOR, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(btn, LV_OPA_20, LV_PART_MAIN);
    lv_obj_align(btn, LV_ALIGN_TOP_LEFT, 36, 24);
    lv_obj_add_event_cb(btn, CloseCurrentViewHandler, LV_EVENT_CLICKED, NULL);

    btn = GuiCreateBtn(cont, _("Approve"));
    lv_obj_set_size(btn, 192, 66);
    lv_obj_align(btn, LV_ALIGN_TOP_LEFT, 252, 24);
    lv_obj_add_event_cb(btn, OnApproveHandler, LV_EVENT_CLICKED, NULL);
}

static void GuiCreateQRCodeWidget(lv_obj_t *parent)
{
    lv_obj_t *label = GuiCreateIllustrateLabel(parent, _("connect_wallet_scan"));
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 152 - GUI_MAIN_AREA_OFFSET);
    lv_obj_set_style_text_opa(label, LV_OPA_60, LV_PART_MAIN);

    lv_obj_t *qrCont = GuiCreateContainerWithParent(parent, 408, 482);
    lv_obj_add_flag(qrCont, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_align(qrCont, LV_ALIGN_TOP_MID, 0, 62);
    lv_obj_set_style_bg_color(qrCont, DARK_BG_COLOR, LV_PART_MAIN);
    lv_obj_set_style_radius(qrCont, 24, LV_PART_MAIN);

    lv_obj_t *qrBgCont = GuiCreateContainerWithParent(qrCont, 336, 336);
    lv_obj_align(qrBgCont, LV_ALIGN_TOP_MID, 0, 36);
    lv_obj_set_style_bg_color(qrBgCont, WHITE_COLOR, LV_PART_MAIN);

    lv_obj_t *qrcode = GuiCreateContainerWithParent(qrBgCont, 294, 294);
    lv_obj_align(qrcode, LV_ALIGN_TOP_MID, 0, 21);

    lv_obj_align(qrcode, LV_ALIGN_TOP_MID, 0, 21);
    g_keyDerivationTileView.qrCode = qrcode;

    lv_obj_t *bottomCont = GuiCreateContainerWithParent(qrCont, 408, 104);
    lv_obj_align(bottomCont, LV_ALIGN_BOTTOM_MID, 0, 0);
    lv_obj_set_style_bg_color(bottomCont, DARK_BG_COLOR, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(bottomCont, LV_OPA_0, LV_STATE_DEFAULT | LV_PART_MAIN);

    label = GuiCreateNoticeLabel(bottomCont, _("Network"));
    lv_obj_align(label, LV_ALIGN_TOP_LEFT, 36, 12);

    lv_obj_t *coinCont = GuiCreateContainerWithParent(bottomCont, 280, 30);
    lv_obj_align(coinCont, LV_ALIGN_TOP_LEFT, 36, 50);
    lv_obj_set_style_bg_color(coinCont, DARK_BG_COLOR, LV_PART_MAIN);

    lv_obj_t *img = GuiCreateImg(coinCont, &coinBtc);
    lv_img_set_zoom(img, 110);
    lv_img_set_pivot(img, 0, 0);
    lv_obj_align(img, LV_ALIGN_TOP_LEFT, 0, 0);
}

static void OnApproveHandler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED)
    {
        GuiAnimatingQRCodeInit(g_keyDerivationTileView.qrCode, ModelGenerateSyncUR, true);
        GuiKeyDerivationRequestNextTile();
    }
}

static void OnReturnHandler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED)
    {
        GuiKeyDerivationRequestPrevTile();
    }
}

void GuiKeyDerivationWidgetHandleURGenerate(char *data, uint16_t len)
{
    GuiAnimantingQRCodeFirstUpdate(data, len);
}

void GuiKeyDerivationWidgetHandleURUpdate(char *data, uint16_t len)
{
    GuiAnimatingQRCodeUpdate(data, len);
}
