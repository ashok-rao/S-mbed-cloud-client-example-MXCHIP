
//----------------------------------------------------------------------------
//   The confidential and proprietary information contained in this file may
//   only be used by a person authorised under and to the extent permitted
//   by a subsisting licensing agreement from ARM Limited or its affiliates.
//
//          (C) COPYRIGHT 2013-2017 ARM Limited or its affiliates.
//              ALL RIGHTS RESERVED
//
//   This entire notice must be reproduced on all copies of this file
//   and copies of this file may only be made by a person if such person is
//   permitted to do so under the terms of a subsisting license agreement
//   from ARM Limited or its affiliates.
//----------------------------------------------------------------------------

#ifdef MBED_CLOUD_CLIENT_USER_CONFIG_FILE
#include MBED_CLOUD_CLIENT_USER_CONFIG_FILE
#endif

#include <stdint.h>

#ifdef MBED_CLOUD_DEV_UPDATE_ID
const uint8_t arm_uc_vendor_id[] = {
    0xfa, 0x6b, 0x4a, 0x53, 0xd5, 0xad, 0x5f, 0xdf, 0xbe, 0x9d, 0xe6, 0x63, 0xe4, 0xd4, 0x1f, 0xfe
};
const uint16_t arm_uc_vendor_id_size = sizeof(arm_uc_vendor_id);

const uint8_t arm_uc_class_id[]  = {
    0xf7, 0x67, 0x8f, 0x97, 0x52, 0x61, 0x54, 0x63, 0x89, 0x88, 0x74, 0x32, 0x32, 0x6a, 0xc3, 0x9d
};
const uint16_t arm_uc_class_id_size = sizeof(arm_uc_class_id);
#endif

#ifdef MBED_CLOUD_DEV_UPDATE_CERT
const uint8_t arm_uc_default_fingerprint[] =  {
    0x11, 0x51, 0x71, 0x90, 0x49, 0x57, 0xf0, 0xc0, 0x4e, 0xa0, 0x35, 0xbf, 0x1, 0x93, 0xe5, 0xe8,
    0xef, 0xe, 0x79, 0xd9, 0xf4, 0x3d, 0xd3, 0x78, 0x85, 0x52, 0x9d, 0x3, 0x52, 0x72, 0x58, 0x36
};
const uint16_t arm_uc_default_fingerprint_size =
    sizeof(arm_uc_default_fingerprint);

const uint8_t arm_uc_default_subject_key_identifier[] =  {
    0x33, 0x1a, 0xb6, 0x9b, 0x1f, 0xd4, 0x71, 0x6e, 0xca, 0x63, 0x44, 0x33, 0xa9, 0xf3, 0x5a, 0x9f,
    0x39, 0x3c, 0x78, 0xb4
};
const uint16_t arm_uc_default_subject_key_identifier_size =
    sizeof(arm_uc_default_subject_key_identifier);

const uint8_t arm_uc_default_certificate[] = {
    0x30, 0x82, 0x1, 0x7f, 0x30, 0x82, 0x1, 0x25, 0xa0, 0x3, 0x2, 0x1, 0x2, 0x2, 0x14, 0x2d,
    0x36, 0x9e, 0xa5, 0x72, 0x13, 0xf2, 0xdc, 0x3e, 0xec, 0xc, 0x22, 0xc0, 0xf2, 0xef, 0xd, 0xfe,
    0x84, 0x3f, 0xa1, 0x30, 0xa, 0x6, 0x8, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x4, 0x3, 0x2, 0x30,
    0x12, 0x31, 0x10, 0x30, 0xe, 0x6, 0x3, 0x55, 0x4, 0x3, 0xc, 0x7, 0x61, 0x72, 0x6d, 0x2e,
    0x63, 0x6f, 0x6d, 0x30, 0x1e, 0x17, 0xd, 0x31, 0x38, 0x30, 0x37, 0x31, 0x36, 0x31, 0x35, 0x31,
    0x37, 0x30, 0x30, 0x5a, 0x17, 0xd, 0x31, 0x38, 0x31, 0x30, 0x31, 0x34, 0x31, 0x35, 0x31, 0x37,
    0x30, 0x30, 0x5a, 0x30, 0x12, 0x31, 0x10, 0x30, 0xe, 0x6, 0x3, 0x55, 0x4, 0x3, 0xc, 0x7,
    0x61, 0x72, 0x6d, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x59, 0x30, 0x13, 0x6, 0x7, 0x2a, 0x86, 0x48,
    0xce, 0x3d, 0x2, 0x1, 0x6, 0x8, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x3, 0x1, 0x7, 0x3, 0x42,
    0x0, 0x4, 0xec, 0xc5, 0xf, 0x33, 0x87, 0x18, 0x53, 0x9e, 0x2f, 0xe, 0xd2, 0xf3, 0x76, 0x26,
    0xf, 0x3b, 0x22, 0xa5, 0x88, 0x58, 0x7, 0x8b, 0x7e, 0x7f, 0xfe, 0x1e, 0xe2, 0x6d, 0xb8, 0x54,
    0x5f, 0xcc, 0x27, 0x3d, 0x80, 0xea, 0x8f, 0x78, 0x54, 0x88, 0x47, 0xae, 0x5b, 0xa2, 0x23, 0xcc,
    0x16, 0x2, 0x93, 0x3f, 0x9d, 0xe1, 0x77, 0xdb, 0x3b, 0x11, 0x58, 0xd2, 0xb7, 0x74, 0x1f, 0x22,
    0x39, 0x4b, 0xa3, 0x59, 0x30, 0x57, 0x30, 0xb, 0x6, 0x3, 0x55, 0x1d, 0xf, 0x4, 0x4, 0x3,
    0x2, 0x7, 0x80, 0x30, 0x14, 0x6, 0x3, 0x55, 0x1d, 0x11, 0x4, 0xd, 0x30, 0xb, 0x82, 0x9,
    0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x68, 0x6f, 0x73, 0x74, 0x30, 0x13, 0x6, 0x3, 0x55, 0x1d, 0x25,
    0x4, 0xc, 0x30, 0xa, 0x6, 0x8, 0x2b, 0x6, 0x1, 0x5, 0x5, 0x7, 0x3, 0x3, 0x30, 0x1d,
    0x6, 0x3, 0x55, 0x1d, 0xe, 0x4, 0x16, 0x4, 0x14, 0x33, 0x1a, 0xb6, 0x9b, 0x1f, 0xd4, 0x71,
    0x6e, 0xca, 0x63, 0x44, 0x33, 0xa9, 0xf3, 0x5a, 0x9f, 0x39, 0x3c, 0x78, 0xb4, 0x30, 0xa, 0x6,
    0x8, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x4, 0x3, 0x2, 0x3, 0x48, 0x0, 0x30, 0x45, 0x2, 0x21,
    0x0, 0x9d, 0xd6, 0x5f, 0x10, 0x3b, 0x8, 0xbb, 0x32, 0xe9, 0xbc, 0xc6, 0x95, 0xe7, 0xe6, 0x5,
    0xe1, 0x39, 0x97, 0xce, 0x9b, 0xb2, 0x2c, 0xf7, 0xe1, 0x7, 0x6a, 0xbf, 0xa4, 0xfe, 0x53, 0xc3,
    0x18, 0x2, 0x20, 0x7, 0x4d, 0x4e, 0xf1, 0xb2, 0x5, 0x3e, 0x4a, 0xdb, 0xe, 0xa9, 0xa4, 0x8,
    0xb6, 0x92, 0x98, 0x29, 0x49, 0xd8, 0x39, 0x32, 0xb2, 0x33, 0x17, 0x14, 0xcd, 0xa0, 0x3a, 0x4a,
    0x95, 0x69, 0x3f
};
const uint16_t arm_uc_default_certificate_size = sizeof(arm_uc_default_certificate);
#endif


#ifdef MBED_CLOUD_DEV_UPDATE_PSK
const uint8_t arm_uc_default_psk[] = {
    
};
const uint8_t arm_uc_default_psk_size = sizeof(arm_uc_default_psk);
const uint16_t arm_uc_default_psk_bits = sizeof(arm_uc_default_psk)*8;

const uint8_t arm_uc_default_psk_id[] = {
    
};
const uint8_t arm_uc_default_psk_id_size = sizeof(arm_uc_default_psk_id);
#endif