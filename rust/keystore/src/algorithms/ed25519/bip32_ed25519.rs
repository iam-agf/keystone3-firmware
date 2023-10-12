use alloc::string::String;
use alloc::vec::Vec;
use core::str::FromStr;

use crate::algorithms::utils::normalize_path;
use third_party::bitcoin::bip32::{ChildNumber, DerivationPath};
use third_party::cryptoxide::hmac;
use third_party::cryptoxide::pbkdf2;
use third_party::cryptoxide::sha2::Sha512;
use third_party::ed25519_bip32_core::{DerivationScheme, XPrv, XPub};

use crate::errors::{KeystoreError, Result};

pub fn get_extended_public_key_by_entropy(path: &String, entropy: &[u8], passphrase: &[u8]) -> Result<XPub> {
    let xprv = get_extended_private_key_by_entropy(path, entropy, passphrase)?;
    Ok(xprv.public())
}

pub fn get_extended_private_key_by_entropy(path: &String, entropy: &[u8], passphrase: &[u8]) -> Result<XPrv> {
    let icarus_master_key = get_icarus_master_key_by_entropy(entropy, passphrase)?;
    let path = normalize_path(path);
    let derivation_path = DerivationPath::from_str(path.as_str())
        .map_err(|e| KeystoreError::InvalidDerivationPath(format!("{}", e)))?;
    let childrens: Vec<ChildNumber> = derivation_path.into();
    let key = childrens
        .iter()
        .fold(icarus_master_key, |acc, cur| match cur {
            ChildNumber::Hardened { index } => acc.derive(DerivationScheme::V2, index + 0x80000000),
            ChildNumber::Normal { index } => acc.derive(DerivationScheme::V2, *index),
        });
    Ok(key)
}

pub fn sign_message_by_entropy(message: &[u8], path: &String, entropy: &[u8], passphrase: &[u8]) -> Result<[u8; 64]> {
    let xprv = get_extended_private_key_by_entropy(path, entropy, passphrase)?;
    let sig = xprv.sign::<Vec<u8>>(message);
    Ok(*sig.to_bytes())
}

//https://cips.cardano.org/cips/cip3/icarus.md
fn get_icarus_master_key_by_entropy(entropy: &[u8], passphrase: &[u8]) -> Result<XPrv> {
    let mut hash = [0u8; 96];
    let digest = Sha512::new();
    let iter_count = 4096;
    pbkdf2::pbkdf2(
        &mut hmac::Hmac::new(digest, passphrase),
        entropy,
        iter_count,
        &mut hash,
    );
    Ok(XPrv::normalize_bytes_force3rd(hash))
}

#[cfg(test)]
mod tests {

    use super::*;
    use std::string::ToString;
    use third_party::hex;

    extern crate std;

    #[test]
    fn test_icarus_master_key() {
        let entropy = hex::decode("00000000000000000000000000000000").unwrap();
        let icarus_master_key = get_icarus_master_key_by_entropy(entropy.as_slice(), b"").unwrap();
        assert_eq!("60ce7dbec3616e9fc17e0c32578b3f380337b1b61a1f3cb9651aee30670e6f53970419a23a2e4e4082d12bf78faa8645dfc882cee2ae7179e2b07fe88098abb2072310084784c7308182dbbdb1449b2706586f1ff5cbf13d15e9b6e78c15f067",
                   icarus_master_key.to_string())
    }

    #[test]
    fn test_icarus_master_key_with_passphrase() {
        let entropy = hex::decode("46e62370a138a182a498b8e2885bc032379ddf38").unwrap();
        let mut icarus_master_key = get_icarus_master_key_by_entropy(entropy.as_slice(), b"").unwrap();
        assert_eq!("c065afd2832cd8b087c4d9ab7011f481ee1e0721e78ea5dd609f3ab3f156d245d176bd8fd4ec60b4731c3918a2a72a0226c0cd119ec35b47e4d55884667f552a23f7fdcd4a10c6cd2c7393ac61d877873e248f417634aa3d812af327ffe9d620",
                   icarus_master_key.to_string());

        icarus_master_key = get_icarus_master_key_by_entropy(entropy.as_slice(), b"foo").unwrap();
        assert_eq!("70531039904019351e1afb361cd1b312a4d0565d4ff9f8062d38acf4b15cce41d7b5738d9c893feea55512a3004acb0d222c35d3e3d5cde943a15a9824cbac59443cf67e589614076ba01e354b1a432e0e6db3b59e37fc56b5fb0222970a010e",
                   icarus_master_key.to_string())
    }

    #[test]
    fn test_get_extended_private_key() {
        {
            let entropy = hex::decode("00000000000000000000000000000000").unwrap();
            let key = get_extended_private_key_by_entropy(&"m/0'".to_string(), entropy.as_slice(), b"")
                .unwrap();
            assert_eq!("8872ff61b06281da05205ffb765c256175cc2aaab52cd7176b5d80286c0e6f539e936c7b5f018c935544e3dff339dfe739c47ae8b364330a3162f028c658257b35a473378343fcc479fd326bc2c2a23f183ce682d514bd5a5b1d9a14ff8297cf",
                       key.to_string())
        }
    }
}
