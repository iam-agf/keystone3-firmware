use crate::errors::{CardanoError, R};
use crate::structs::{ParseContext, ParsedCardanoTx};
use alloc::format;
use alloc::string::ToString;
use alloc::vec::Vec;
use cardano_serialization_lib;
use cardano_serialization_lib::crypto::{Ed25519Signature, PublicKey, Vkey, Vkeywitness};
use third_party::cryptoxide::hashing::blake2b_256;

pub fn parse_tx(tx: Vec<u8>, context: ParseContext) -> R<ParsedCardanoTx> {
    let cardano_tx = cardano_serialization_lib::Transaction::from_bytes(tx)?;
    ParsedCardanoTx::from_cardano_tx(cardano_tx, context)
}

pub fn check_tx(tx: Vec<u8>, context: ParseContext) -> R<()> {
    let cardano_tx = cardano_serialization_lib::Transaction::from_bytes(tx)?;
    ParsedCardanoTx::verify(cardano_tx, context)
}

pub fn sign_tx(
    tx: Vec<u8>,
    context: ParseContext,
    entropy: &[u8],
    passphrase: &[u8],
) -> R<Vec<u8>> {
    let cardano_tx = cardano_serialization_lib::Transaction::from_bytes(tx)?;
    let hash = blake2b_256(cardano_tx.body().to_bytes().as_ref());
    let mut witness_set = cardano_serialization_lib::TransactionWitnessSet::new();
    let mut vkeys = cardano_serialization_lib::crypto::Vkeywitnesses::new();
    let icarus_master_key =
        keystore::algorithms::ed25519::bip32_ed25519::get_icarus_master_key_by_entropy(
            entropy, passphrase,
        )
        .map_err(|e| CardanoError::SigningFailed(e.to_string()))?;
    let mut utxo_signatures: Vec<([u8; 32], [u8; 64])> = context
        .get_utxos()
        .iter()
        .filter(|v| {
            v.get_master_fingerprint()
                .eq(&context.get_master_fingerprint())
        })
        .map(|v| {
            let pubkey =
                keystore::algorithms::ed25519::bip32_ed25519::derive_extended_pubkey_by_xprv(
                    &icarus_master_key,
                    &v.get_path().to_string(),
                )
                .map(|v| v.public_key())
                .map_err(|e| CardanoError::SigningFailed(e.to_string()));
            let signature = keystore::algorithms::ed25519::bip32_ed25519::sign_message_by_xprv(
                &icarus_master_key,
                &hash,
                &v.get_path().to_string(),
            )
            .map_err(|e| CardanoError::SigningFailed(e.to_string()));
            pubkey.and_then(|_pubkey| signature.map(|_signature| (_pubkey, _signature)))
        })
        .collect::<R<Vec<([u8; 32], [u8; 64])>>>()?;
    let mut cert_signatures = context
        .get_cert_keys()
        .iter()
        .filter(|v| {
            v.get_master_fingerprint()
                .eq(&context.get_master_fingerprint())
        })
        .map(|v| {
            let pubkey =
                keystore::algorithms::ed25519::bip32_ed25519::derive_extended_pubkey_by_xprv(
                    &icarus_master_key,
                    &v.get_path().to_string(),
                )
                .map(|v| v.public_key())
                .map_err(|e| CardanoError::SigningFailed(e.to_string()));
            let signature = keystore::algorithms::ed25519::bip32_ed25519::sign_message_by_xprv(
                &icarus_master_key,
                &hash,
                &v.get_path().to_string(),
            )
            .map_err(|e| CardanoError::SigningFailed(e.to_string()));
            pubkey.and_then(|v| signature.map(|_v| (v, _v)))
        })
        .collect::<R<Vec<([u8; 32], [u8; 64])>>>()?;
    utxo_signatures.append(&mut cert_signatures);
    for (pubkey, signature) in utxo_signatures {
        let v = Vkeywitness::new(
            &Vkey::new(
                &PublicKey::from_bytes(&pubkey)
                    .map_err(|e| CardanoError::SigningFailed(e.to_string()))?,
            ),
            &Ed25519Signature::from_bytes(signature.to_vec())
                .map_err(|e| CardanoError::SigningFailed(e.to_string()))?,
        );
        vkeys.add(&v);
    }
    witness_set.set_vkeys(&vkeys);

    Ok(witness_set.to_bytes())
}

#[cfg(test)]
mod test {
    use cardano_serialization_lib::Transaction;

    extern crate std;

    use crate::transaction::parse_tx;
    use std::println;
    use third_party::hex;

    #[test]
    fn spike_transaction() {
        let tx_hex = "84a900981c8258200881575434c93c7da15490fb2e1e73fdff6566fd5a2c59cb59ea022f7c049cf702825820211d298b04f2fadc2d0ec4570791fd2f4f7912661b255276a7746487639cdfb40082582031037d950c5423967e4432fb55f1f3241d29cc749f1c9b65b5a9996fd64e272e0182582031e468925a444bd6ef5976640621c8ad04407595c849f005fb72e455bf477e9c01825820324a39b1bbfb13dedfa7bf25edafa13ae9a161b6b64cdbfdca8ac61da01a16630182582041e82c53fa3cd899ae8cfd0fb31d04798cbb0fc7ed5d599be44f3f062135ff4700825820733a5eebbe042e11ce5636e771f676183363fa354f0702aa47b45725bc750c9d018258207f5c5a3cfc43c83762e33a7d41b020bf8005cd6f5f3bdd9aae42c860bca26c290282582084145ac07d657dd7a785b5deaafa652ad9c11c455c9206f3acabc3ffac4c613f0282582084145ac07d657dd7a785b5deaafa652ad9c11c455c9206f3acabc3ffac4c613f038258208edb92fb91a22898824c67f4f2892dbb698909a66f40d633ebd2ac14eb05affb048258208edb92fb91a22898824c67f4f2892dbb698909a66f40d633ebd2ac14eb05affb058258209b77bc7fef791e632c5620e159fb75d7fe8efb47fa8ead3994e3a61e76c99171018258209b77bc7fef791e632c5620e159fb75d7fe8efb47fa8ead3994e3a61e76c9917102825820a4cd805978791dfe7b263b8c468ae23680aaa881b5120079d7765b3be935bd4301825820a6d9662a443c44c28d680e1c70ad38dee3e79bd7386824c7950943d7d2471ea602825820a6d9662a443c44c28d680e1c70ad38dee3e79bd7386824c7950943d7d2471ea603825820abc6d283b338e73264f64fa8fe11f2b17095df09433a475f34cd9e5081b94f6805825820b639a0a98da37213f726c3de172ca63ccfba6abaed5914b29cfa353c82aff72501825820bc0781388fac303630b39b53c42c37502a68a4071fd352e70f65fbdb6251520705825820c44c1bb65c3ee0fc8e0261e6e01899870e69fa383e89d852cd4c5dd81f951fbf02825820c44c1bb65c3ee0fc8e0261e6e01899870e69fa383e89d852cd4c5dd81f951fbf03825820ca474dc37e1cf207c20dae02885b5f673166d40bc64d4e806f695e6fca05a08901825820ca474dc37e1cf207c20dae02885b5f673166d40bc64d4e806f695e6fca05a08902825820e15fae376ec57f71ebbf23fe609eba12e780b88ef529f5d3e41ddadcd4ba4bf601825820e15fae376ec57f71ebbf23fe609eba12e780b88ef529f5d3e41ddadcd4ba4bf602825820f4ecc372d405f97470c0465f3aff117ba66f7ebc4dd07defc4cd7a07d13ddef100825820fb2c4732e52e253d47b8b3bc23e9ccdef3064e5701a1517fd5dc9c432a9f82b6040185a3005839113a6b7f80e5e5ab105a5ca6fe3e13456084ffd4b17d9408a62fe172fae7e620338c24165d8496444f91b949f45372d9f60dc8a79bbbdd063c01821a0c0a4680a1581ce16a71fccda8173dc6c40e1a87aa5f976cbb33a23bfd20ed048ab38ca158200f955242dc69ef274e9c1045bc7ee88fbef8584bd9cac776e234aab78f73bbb91903e60282005820e75d9553735cd1a991ff5b1cc90d257afb1fe350474452707ef26d552ff7fde3a200583901fa14ae777e2c8c5f456bb2083f6883d02e47d645a349243e64e560d3a2803a2739522d725d93ab5ea68a76ac05c18ff7b12d468e6ef8717001821a0013669aa1581ce16a71fccda8173dc6c40e1a87aa5f976cbb33a23bfd20ed048ab38ca158200f955242dc69ef274e9c1045bc7ee88fbef8584bd9cac776e234aab78f73bbb901a200583901fa14ae777e2c8c5f456bb2083f6883d02e47d645a349243e64e560d3a2803a2739522d725d93ab5ea68a76ac05c18ff7b12d468e6ef87170011a09a100e4a200583901fa14ae777e2c8c5f456bb2083f6883d02e47d645a349243e64e560d3a2803a2739522d725d93ab5ea68a76ac05c18ff7b12d468e6ef8717001821a00270803a3581c961f2cac0bb1967d74691af179350c1e1062c7298d1f7be1e4696e31a14524444552500c581cf66d78b4a3cb3d37afa0ec36461e51ecbde00f26c8f0a68f94b69880a24469425443184f44694554481906ec581cfbae99b8679369079a7f6f0da14a2cf1c2d6bfd3afdf3a96a64ab67aa1490014df1047454e53581a040b537aa200583901fa14ae777e2c8c5f456bb2083f6883d02e47d645a349243e64e560d3a2803a2739522d725d93ab5ea68a76ac05c18ff7b12d468e6ef87170011a0014e1a9021a0009a2d7075820cfc57b377af8792e3ab07342dad0e5c477fdfd8c7c123a55c2fb6861d4e8c1dd0b58204aa3d3e79ab11128459d6d68c90da60c76f255bdeb7ef2c2139c58605816655d0d81825820cbadea170b6a24ca3d17a5cc5d2c3772d02c471e9069613af1db035dc2de6fdd070e81581cfa14ae777e2c8c5f456bb2083f6883d02e47d645a349243e64e560d310a200583901fa14ae777e2c8c5f456bb2083f6883d02e47d645a349243e64e560d3a2803a2739522d725d93ab5ea68a76ac05c18ff7b12d468e6ef87170011a003dd6fd111a000e7443a3038159134f59134c01000033333323232323232323232323232323232323232323232323232323232323232323232323232323232323232323232323232323232323232323222222222333222325333041001149858c8c8c8c8c8c8c8c8c8c8c8ccc8c8c8c94ccc13ccdc3a4004004266036466ebcc13c008c13cc10400401458c140008c140004dd5000982518248059191919191919191919299982a99b87480000084c8ccc8cc08c8cdd7982b982480080100399182b1824000982a982a18238059299982b99baf006305630480011332233029002001303233303570001466607608608666e080080b0c0c8ccc0d5c01bab30563055304800133303b02000b002161337106660866eacc15404c07c0292000375a60a80022646464a6660b066e1d200200213332533305a0011225001153330593042305700113222300200330580011225001330302330320213058304a0010082333302523303302432305a304c00130593058304b00100f2323232323232323232323232323232323232323232533306f3370e900100109929983319baf3374a9000198369837814198369ba90113306d306f306e02705b00d15330663370e04490000a99833299833182519b8800b480004cdc38058050a9983319981eb8900800915330663371200c00a2a660cc6466607ce2400403ccc1048cdc10008040048a998330008a9983319b880213370466e0002d200204513370e608c6608e6eb8c1bc06409920024a2264a660cc66ebccdd2a4000660da60de050660da6ea4044cc1b4c1bcc1b809c16c03454cc198cdc3811240002a660cca660cc609466e2002d200013370e0160142a660cc66607ae2402002454cc198cdc48030028a998331919981f38900100f330412337040020100122a660cc0022a660cc66e20084cdc119b8000b480081144cdc39823198239bae306f01902648008c8c8c94ccc1c8cdc3a40000042a664660e60022944c130cdc499191998308099bae3073001375c60e660e400260c800260e200890000999183711299983b0008a50153330753375e60e800200629444c008c1cc004c1c4004dd618388170b183980118398009baa03630700023070001375460d60466eb4c1a8c1a4c1a4034dd698348119bad3068023375660ce0466eacc19802cccc14cdd598329832182b8070010039998291bab3064022001006375c60c603864646464a6660ce66e1d20000021333304f3066001004232323232005533306b3370e9000001099299983619baf0010641323232323232323232324994ccc1d80045261630720045333073337126e340052040149858dd700098380009837002299983799b89371a00290200a4c2c6eb8004c1b0004c1a80084c8c8c8c8c8c8c8c8c8c8c8c9265333078001149858c1d00114ccc1d4cdc49b8d0014810052616375c00260e400260e0008a6660e266e24dc6800a40802930b1bae001306e001306c004533306d3370e6e340052038149858dd700098350008b183600118360009baa001161630680023068001375460c660a860aa0186eb0c188c18407cc0f4c0f4ccc101c00008011bab3060305f305200733304402b00132337029000000a40046eb8c178004c170c170004c16c004c134004c8c8c8c94ccc17ccdc3a40040042c2666608e60bc00200846464646400aa6660c666e1d2000002132323232323232323232533306d3375e0020ca264646464646464646464646464646464646464646464646464646464932999844808008a4c2c610a0200ca66610c0266e1d2000002132323232324994ccc22c04004526163087010045333088013370e6e340052038149858dd70009842808008a9998430099b87480080084c92653330870100114985858c21c04008c21c04004dd5000984080800983f80329998400099b87480000084c8c8c8c8c8c8c926533308701001149858c20c040194ccc21004cdc3a400000426464646464932999844808008a4c2c610a02008a66610c0266e1cdc6800a40702930b1bae00130830100115333084013370e90010010991919191924ca666112020022930b18428080229998430099b87371a002901c0a4c2c6eb8004c20c0400458c21404008c21404004dd5000983f8008a9998400099b87480080084c8c8c8c8c8c8c8c8c8c926533308a01001149858c2180400cdd68009842808009841808019bad001308201001308001003375a00260fe0022c6102020046102020026ea8004c1ec004c1e40114ccc1e94cc1c0cdc4a4000002266e2400419052616375a00260ee00260ea0066eb4004c1d0004c1c800cdd680098388009837802299983819b89371a00290200a4c2c6eb8004c1b4004c1ac0084c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c8c926533308b01001149858c21c040194ccc22004cdc3a400000426464646464932999846808008a4c2c611202008a6661140266e1cdc6800a40702930b1bae00130870100115333088013370e900100109924ca666112020022930b0b1844808011844808009baa0013083010013081010065333082013370e900000109919191919191924ca666112020022930b18428080329998430099b87480000084c8c8c8c8c926533308b01001149858c21c040114ccc22004cdc39b8d001480e052616375c002610a020022a66610c0266e1d2002002132323232324994ccc22c04004526163087010045333088013370e6e340052038149858dd70009842808008b1843808011843808009baa00130810100115333082013370e900100109919191919191919191924ca666118020022930b1844008019bad001308701001308501003375a0026108020026104020066eb4004c2040400458c20c04008c20c04004dd5000983e800983d802299983e29983919b89480000044cdc48008330a4c2c6eb4004c1e4004c1dc00cdd6800983b000983a0019bad001307300130710045333072337126e340052040149858dd700098378009836802299983719b87371a002901c0a4c2c6eb8004c1ac004c1a400cdd680098340009833003182c9bab004305f3756006660be4a6660cc66ebcc1a40041784c8c8c8cdd81836002183580218309bab306a0033306123232323376060dc00860da0086eb4c1b000d4ccc1a4cdc49b8d0014810052616375c60d60020026eacc1a00044c8c8c8c8c8cdd81837003183680318319bab306c0053306323232323376060e000860de0086eb4c1b800d4ccc1accdc49b8d0014810052616375c60da0020026eacc1a800d4ccc19ccdc39b8d001480e052616375c60d20020026eac004c18800458c190008c190004dd50008b183000118300009baa305b304c304d002375860b460b202e60b260b060960022c2c2c60b200460b20026ea8c8c154c11c004c8c154c11c004c150c14cc118028c158008c158004dd500a19ba548000cc138c8c144c10c004c8c144c10c004c140c13cc108018cc138cdd2a40006609c66e9520003304e01803c03c03c3758609e01ca6660a000429000099982799baf3052304e00237520766eb4c144c138dd5982898270012400066607600202e004646eacc134c130c0fc004c130c12cc0f8008dd7182598250018b1bac304900930470013046001304500130440013036008323043303500130420013041304100130400013032304000130310013232323200753330403370e9000001099191919191919191919191919299982699baf00104513232323232323232323232324994ccc1640045261630550045333056337126e340052040149858dd700098298009828803299982919b87480000084c8c8c8c8c8c8c9265333059001149858c1540194ccc158cdc3a4000004264a6660ae66ebc00413c4c8c8c8c8c8c926533305d001149858c1640114ccc168cdc49b8d0014810052616375c00260ae00260aa0042646464646464646493299982f8008a4c2c60b6008a6660b866e24dc6800a40802930b1bae0013059001305700453330583370e6e340052038149858dd7000982a8008b182b801182b8009baa0013051001153330523370e900100109924ca6660a60022930b0b182980118298009baa001304d001304b002132323232323232323232323232324994ccc16c0045261630570045333058337126e340052040149858dd7000982a8009829803299982a19b87480000084c8c8c8c8c8c8c926533305b001149858c15c0194ccc160cdc3a4000004264a6660b266ebc0041444c8c8c8c8c8c926533305f001149858c16c0114ccc170cdc49b8d0014810052616375c00260b200260ae004264646464646464649329998308008a4c2c60ba008a6660bc66e24dc6800a40802930b1bae001305b0013059004533305a3370e6e340052038149858dd7000982b8008b182c801182c8009baa0013053001153330543370e900100109924ca6660aa0022930b0b182a801182a8009baa001304f001304d004533304e3370e6e340052038149858dd7000982580098248019bad00130480013046003375a002608a002608600c606c6eac010c0f0dd58019981e1299982199baf304600103b13232323376060920086090008607c6eacc11c00ccc0f88c8c8c8cdd8182580218250021bad30490035333046337126e340052040149858dd718240008009bab30450011323232323233760609600c609400c60806eacc124014cc1008c8c8c8cdd8182680218260021bad304b0035333048337126e340052040149858dd718250008009bab304700353330443370e6e340052038149858dd718230008009bab001303f001163041002304100137540066464646400ca66608066e1d20000021323232324994ccc110004526163040003375a002607e0022a66608066e1d20020021324994ccc1040045261616304100230410013754004002605e444a666070002244a0022a66606e6004606c002264446004006606c002266006004606a002444666008600a00600400244466660604444a6660740042660120040022a66607400229404c8c8c8c94cc0cccdc78020010a99819998038018008999804003981d803181d8029bab303e303b004375c607c60740066eacc0f0c0e400cdd7181e181c00100180100091119998179111299981c8010998040010008a99981c8008a501323232325330323371e0080042a660646600e006002266601000e607400c607400a6eb4c0f4c0e8010dd7181e981c8019bad303b3038003375c6076606e0040060040026056444a6660680042a66606800229445280a99981a0008a50153330335330293375e606c6064004606c6064002266ebcc0d4c0c8008c0d4c0c80044cc00cc0c4008c0c400452811198019198028018008009180191ba6300237560024600446ea0c008dd68009119814912999818800881609981699bb03033302f00130043032302f0013002302e0010014820212bd7ccc0948894ccc0b800440084cc00ccdc000124004605600290001119801919802801991816180f00098159815180e80080091812112999816000880b099299981618020008998148009801981500109801981500118150009119191919299981699b874800000852809919b8f001007375c6058002605c004605c0026ea8004c0a0c0680048ccc09c00528251233002232533302830110011225001122300200333004253330283375e0026ea120001225001122300200300100123002233300237560024644460040066e98004489400488cc080894ccc0a0004408c4c8ccc014c0a8c09c0088cc098cdd8181618140018008010800980118128008009111998021119980380280100080100091801911ba63300337560046eac0048c00888dd4198019bad002375a002444666600800644004004002460346004002446464466002006004444a6660480022660400060042646464a66604c66ebc0080044cc08ccdd800119804981400318140019998041100100298120020a99981319b90375c0046eb80044cc08c018cccc0208800400cc0900100144cc08c00ccccc02088004018014c090010c0a0008c09c010c088004894ccc08800840044cccc00c88004c080008c07c0080048894ccc07ccdc3800a400020362660080066600a00400244660086ea4008dd300091198019ba90023750002446603066ec000800405cc04c8894ccc06cc010004489400454ccc06ccdd799180d9806800980d00080109911180100199180d980d1806800980d000899801801180c800aba34828270052f5c09101002223333004002480008cccc014009200075a6eac00400c8c008dd480091111980811299980c00088028a99980b99baf301a301600100613004301930160011300230150010012300f300f0012301237540024a66601e66004466008466e212000001001001100116223300423003375660240020024466006460066eb4c0440040048c01c894ccc03c0045288a9980218019806800898011806000911998060010008018a504c1014000233300322533300b001120041322533300c300100216133004300a0032337200020066eb8c034c0240040049281180111299980500088028998031801980400098011803800919180111980100100091801119801001000a5eb7bdb1815d02ba25742ae6955cfaab9e5573a9111c5f1dd3192cbdaa2c1a91560a6147466efb18d33a5d6516b266ce6b6f0048811ca07e21ec112b9dd2e19277844f7404c4cfdb6a5fccbc8c4272a1b2ad0048811ce16a71fccda8173dc6c40e1a87aa5f976cbb33a23bfd20ed048ab38c0048811cf8f753c9ace9a78cddd22366aff9c3618f176fdd679231717a155bdb004c0122d8799f581ce7e620338c24165d8496444f91b949f45372d9f60dc8a79bbbdd063cff00010481d87986a140a1401a061969bf0606581c1f3dd1b685f0d87eaf92120aca3cf56da6ed91e2dbc32a95a26bce4ad87981d87982581c5f1dd3192cbdaa2c1a91560a6147466efb18d33a5d6516b266ce6b6f58200f955242dc69ef274e9c1045bc7ee88fbef8584bd9cac776e234aab78f73bbb958200f955242dc69ef274e9c1045bc7ee88fbef8584bd9cac776e234aab78f73bbb90581840007d8798101821a0006b3c31a0a685aa5f5d90103a10281504f010000322253330034a22930b2b9a1";
        // let tx = Transaction::from_hex(tx_hex).unwrap();
        // println!("{}", tx.to_json().unwrap());

        let tx_hex = hex::decode(tx_hex).unwrap();
        let cardano_tx = cardano_serialization_lib::Transaction::from_bytes(tx_hex).unwrap();
        println!("{}", cardano_tx.to_json().unwrap());
    }
}
