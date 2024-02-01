use third_party::bitcoin::bip32::{Xpub, Fingerprint};

#[derive(Debug, Clone)]
pub struct ParseContext {
    pub master_fingerprint: Fingerprint,
    pub extended_public_key: Xpub,
}

impl ParseContext {
    pub fn new(master_fingerprint: Fingerprint, extended_public_key: Xpub) -> Self {
        ParseContext {
            master_fingerprint,
            extended_public_key,
        }
    }
}
