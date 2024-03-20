#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]

include!(concat!(env!("OUT_DIR"), "/bindings.rs"));

#[cfg(test)]
mod tests {
    use super::*;
    use std::mem;

    #[test]
    fn testCryptoContextBFVRNSCCParams() {
        unsafe {
            let bfv_params = FFIParams::new1(FFISCHEME_BFVRNS_SCHEME);

            println!("bfv_params: {:?}", bfv_params);

            println!("{}", bfv_params.GetThresholdNumOfParties())
        }
    }
}