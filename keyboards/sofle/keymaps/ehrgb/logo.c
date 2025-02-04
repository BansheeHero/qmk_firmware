#ifdef OLED_ENABLE

// SoFle logo
static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,248,252,142,135,  3,  3,123,127, 14,  0,  0,  0,128,128,128,128,  0,  0,128,224,248,124,118, 31, 15,195,240,252,238, 63, 15,128,128,128,128,128,  0,  0,  0,  0,  0,  0, 24, 60,142,243,255,239, 96, 48, 56, 28, 15,  7,  0,128,128,128,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,240,252,254, 63, 15,  0,  0,  0,  0,128,128,128,128,  0,  0,  0,  0,128,128,128,128,  0,  0,  0,128,192,  0,  0,  0,  0,  0,  0,  0,128,128,128,128,224,252, 62, 15,  3,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0, 48,248,252,132,129,131,131,135,207,254,124, 96,252,254,198,255,121, 63, 55,248,252, 31,255, 24, 24, 24,120,255,223,195, 97,120,252,255,223,205,207,103, 51, 24,  0,  0,  0,  0,128,224,252, 63,  7, 15, 28,120,240,224,192,240,252,255,223,205,207,103, 51,124,127,103,240,248,254,222,120,255,255,131,223,246,126, 60,112,252,254,198,255,121, 63, 55,248,252,222,199, 99,249,253,223, 99,112, 28, 15,251,255,222,192,240,252,254,199, 99, 49,253,255,199,192,112, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31, 31, 27, 15,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  0,  0,  0,  0,  0,  0, 28, 30, 26, 31, 15,  3,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}
/* QMK Logo
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}
*/

#endif