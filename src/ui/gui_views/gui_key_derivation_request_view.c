#include "gui.h"
#include "gui_obj.h"
#include "gui_views.h"
#include "gui_multi_accounts_receive_widgets.h"

static int32_t GuiKeyDerivationRequestViewInit()
{
    GuiKeyDerivationRequestInit();
    return SUCCESS_CODE;
}

static int32_t GuiKeyDerivationRequestViewDeInit(void)
{
    GuiKeyDerivationRequestDeInit();
    return SUCCESS_CODE;
}

int32_t GuiKeyDerivationRequestViewEventProcess(void *self, uint16_t usEvent, void *param, uint16_t usLen)
{
    switch (usEvent) {
    case GUI_EVENT_OBJ_INIT:
        return GuiKeyDerivationRequestViewInit();
    case GUI_EVENT_OBJ_DEINIT:
        return GuiKeyDerivationRequestViewDeInit();
    case GUI_EVENT_DISACTIVE:
        break;
    case GUI_EVENT_REFRESH:
        GuiKeyDerivationRequestRefresh();
        break;
    case SIG_SETUP_VIEW_TILE_NEXT:
        GuiKeyDerivationRequestNextTile();
        break;
    case SIG_SETUP_VIEW_TILE_PREV:
        GuiKeyDerivationRequestPrevTile();
        break;
    default:
        return ERR_GUI_UNHANDLED;
    }
    return SUCCESS_CODE;
}

GUI_VIEW g_keyDerivationRequestView = {
    .id = SCREEN_KEY_DERIVATION_REQUEST,
    .previous = NULL,
    .isActive = false,
    .optimization = false,
    .pEvtHandler = GuiKeyDerivationRequestViewEventProcess,
};
