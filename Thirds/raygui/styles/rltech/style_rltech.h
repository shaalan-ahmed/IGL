//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v2.0 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleRLtech();                                   //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2024 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define RLTECH_STYLE_PROPS_COUNT  17

// Custom style name: RLtech
static const GuiStyleProp rltechStyleProps[RLTECH_STYLE_PROPS_COUNT] = {
    { 0, 0, (int)0x000000ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, (int)0xf5f5f5ff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, (int)0x000000ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, (int)0xe10000ff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, (int)0xffffffff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, (int)0xed0000ff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, (int)0xf40000ff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, (int)0x525252ff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, (int)0xf5f5f5ff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, (int)0xcacacaff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, (int)0xe3e3e3ff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, (int)0xb3b3b3ff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 16, (int)0x0000000e },    // DEFAULT_TEXT_SIZE 
    { 0, 17, (int)0x00000000 },    // DEFAULT_TEXT_SPACING 
    { 0, 18, (int)0xc90000ff },    // DEFAULT_LINE_COLOR 
    { 0, 20, (int)0x00000015 },    // DEFAULT_TEXT_LINE_SPACING 
    { 1, 8, (int)0xca0000ff },    // LABEL_TEXT_COLOR_PRESSED 
};

// WARNING: This style uses a custom font: "DepartureMono-Regular.otf" (size: 14, spacing: 0)

#define RLTECH_STYLE_FONT_ATLAS_COMP_SIZE 1964

// Font atlas image pixels data: DEFLATE compressed
static unsigned char rltechFontData[RLTECH_STYLE_FONT_ATLAS_COMP_SIZE] = { 0xed,
    0x9d, 0xdb, 0xb6, 0xab, 0x38, 0x0c, 0x04, 0xfd, 0xff, 0x3f, 0xdd, 0xf3, 0x38, 0x33, 0x6b, 0xed, 0x00, 0x6a, 0xb7, 0x65,
    0x93, 0xd4, 0xa9, 0xb7, 0xc3, 0x4e, 0xe2, 0x20, 0x5f, 0x20, 0x2e, 0x09, 0x0d, 0x00, 0x00, 0x00, 0x80, 0x3f, 0xd1, 0x9f,
    0xff, 0xa3, 0x8b, 0xbf, 0xd6, 0xe3, 0x77, 0xfa, 0xff, 0xff, 0xeb, 0xcf, 0x63, 0xb5, 0x77, 0xd3, 0xe3, 0x4f, 0x75, 0x8e,
    0xe8, 0xcf, 0xf6, 0xcd, 0x7e, 0xa6, 0xca, 0xdf, 0xf2, 0xea, 0x35, 0x57, 0xef, 0xb6, 0x33, 0xfe, 0x9f, 0xda, 0xf5, 0xef,
    0x2b, 0x3e, 0x9d, 0x47, 0x15, 0xce, 0x64, 0xe5, 0x2f, 0x55, 0x7a, 0xc5, 0x75, 0x5c, 0xfd, 0xf8, 0xab, 0xd8, 0xb7, 0xee,
    0x5e, 0x53, 0x6b, 0x69, 0x32, 0xfe, 0xff, 0xfd, 0x57, 0x39, 0xdf, 0x2a, 0xc6, 0x33, 0x33, 0xd2, 0x3f, 0xf7, 0x47, 0x95,
    0x47, 0xf5, 0x98, 0xe8, 0x17, 0xba, 0x9c, 0xe7, 0x14, 0xeb, 0x67, 0xc9, 0x36, 0x0f, 0x63, 0xf4, 0x57, 0xa3, 0x59, 0xef,
    0xcf, 0x32, 0xfa, 0xb0, 0x16, 0x9f, 0xbd, 0x55, 0x33, 0xd1, 0xdd, 0xda, 0x30, 0x0e, 0x8b, 0xbf, 0xbb, 0xca, 0x55, 0xbe,
    0x4f, 0x75, 0x34, 0x74, 0x8c, 0x9e, 0x27, 0xad, 0xd0, 0x82, 0x36, 0xf6, 0x8f, 0xff, 0xab, 0xd9, 0xff, 0x6e, 0xdd, 0x18,
    0xe5, 0x23, 0x27, 0xc4, 0x33, 0x15, 0x7f, 0xa7, 0x8f, 0x2a, 0x38, 0x6a, 0x93, 0xdf, 0x4f, 0xe5, 0xe3, 0x7a, 0x74, 0xec,
    0xfd, 0xf1, 0xf7, 0x56, 0x38, 0x77, 0x56, 0xd8, 0xb1, 0xfe, 0x3f, 0xb9, 0x2f, 0x50, 0xf9, 0xfb, 0x2b, 0xd0, 0xd2, 0x93,
    0xe3, 0xef, 0x5d, 0x89, 0xea, 0xe6, 0x55, 0x27, 0xfe, 0x8e, 0xb0, 0xbe, 0x5d, 0x7a, 0x61, 0xf4, 0x7f, 0xf9, 0x97, 0xa4,
    0xae, 0x5f, 0xab, 0x88, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xe6, 0xee, 0x4c,
    0x66, 0x9f, 0xd1, 0xdb, 0x9b, 0xbc, 0xb2, 0x43, 0x67, 0xed, 0xdc, 0xaa, 0xa1, 0xeb, 0x98, 0xb5, 0xba, 0x74, 0x62, 0x9c,
    0x5d, 0xdf, 0xde, 0xfd, 0x60, 0x99, 0x46, 0x65, 0xca, 0x74, 0xad, 0xec, 0xde, 0x65, 0x76, 0x79, 0x93, 0x66, 0xad, 0x6e,
    0x5a, 0xba, 0xee, 0x5c, 0x64, 0x7c, 0x10, 0x05, 0x3f, 0x31, 0x1b, 0xff, 0x79, 0xb7, 0x4e, 0x96, 0x5b, 0xbb, 0xa3, 0x5f,
    0xaf, 0x8c, 0xff, 0x93, 0x73, 0x27, 0x63, 0x2e, 0x72, 0xe2, 0x91, 0xb7, 0x96, 0xb4, 0xc8, 0xc9, 0xfa, 0x6b, 0x85, 0x54,
    0xe8, 0xfc, 0xf5, 0x44, 0x63, 0x2e, 0xfe, 0xc3, 0x1c, 0xb1, 0xb2, 0xf2, 0x7c, 0x34, 0x31, 0xff, 0xab, 0x21, 0xfa, 0x9f,
    0x57, 0xc9, 0xbb, 0xd6, 0xef, 0x1e, 0xff, 0xba, 0x99, 0xeb, 0xea, 0xa3, 0x59, 0x13, 0xd7, 0x67, 0x9a, 0xb4, 0x77, 0x56,
    0xae, 0xff, 0x5e, 0xfc, 0xcf, 0x9f, 0xff, 0x35, 0xe5, 0x4e, 0xad, 0x8e, 0xff, 0xaa, 0x2c, 0x8f, 0xe4, 0x8a, 0xb1, 0x26,
    0xfe, 0x67, 0x5c, 0xff, 0x39, 0xb9, 0x89, 0xce, 0x75, 0x55, 0x5f, 0xd6, 0xe2, 0x2a, 0x53, 0x5b, 0xa1, 0x15, 0x3b, 0x7d,
    0xff, 0xb7, 0xd7, 0xbb, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x73, 0xcc,
    0xdf, 0xba, 0x3f, 0x3b, 0x6e, 0x6b, 0xdf, 0x66, 0x9d, 0x07, 0x45, 0x76, 0x50, 0xd7, 0xbc, 0x66, 0xbf, 0x11, 0x20, 0xc3,
    0xe9, 0x99, 0x73, 0xb9, 0xee, 0x9c, 0x91, 0x9c, 0xf3, 0x76, 0xee, 0x91, 0xac, 0x45, 0xac, 0x25, 0xde, 0xec, 0x9e, 0xf8,
    0x3b, 0x5e, 0xc8, 0xe7, 0x0c, 0x84, 0x33, 0xe2, 0x3f, 0xb6, 0xc5, 0xdf, 0x31, 0x4f, 0x2a, 0x96, 0x93, 0x6f, 0x49, 0x7b,
    0x55, 0xab, 0xab, 0x6e, 0x95, 0x36, 0x8f, 0x24, 0xd9, 0x55, 0xe8, 0xab, 0x2d, 0xf0, 0x2a, 0x92, 0xa7, 0xaa, 0x95, 0xef,
    0x9d, 0xff, 0xaf, 0x2b, 0x80, 0x66, 0xad, 0x6b, 0x95, 0x7d, 0xf6, 0x9e, 0xf9, 0x5f, 0xc5, 0xf1, 0x3f, 0x02, 0xd1, 0xff,
    0xde, 0xf5, 0xbf, 0xfe, 0x39, 0xeb, 0xe3, 0xef, 0xd4, 0x48, 0xcf, 0x56, 0x88, 0x1d, 0xdb, 0xaf, 0x70, 0xce, 0x8d, 0x7f,
    0x4f, 0xa6, 0xc3, 0x7b, 0xe2, 0xef, 0xe5, 0x7f, 0xfa, 0xd9, 0x98, 0xa9, 0xfb, 0xbf, 0xba, 0x0d, 0x9b, 0x5d, 0xff, 0xfd,
    0x6a, 0xf7, 0xb9, 0xf8, 0x0b, 0xf3, 0xb7, 0x90, 0xe9, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0x4d, 0xfb, 0x61, 0x89, 0x0a, 0xb9, 0x89, 0x9a, 0x45, 0xc9, 0x3d, 0xdd, 0x61, 0xef, 0xe9, 0x7e, 0xde,
    0xf1, 0x4e, 0x19, 0x82, 0x8e, 0xbb, 0xa0, 0x62, 0x5d, 0xca, 0xf1, 0xd1, 0xaa, 0x9c, 0x37, 0x08, 0x54, 0x72, 0x94, 0x86,
    0xe1, 0x03, 0xce, 0x3b, 0x1d, 0xc3, 0x76, 0x2d, 0x3f, 0xbf, 0x8b, 0x16, 0x3f, 0x61, 0xd4, 0xb5, 0x4d, 0x3f, 0x57, 0xa6,
    0xf4, 0x7b, 0xa8, 0xec, 0x76, 0xce, 0xce, 0x45, 0x2a, 0xf4, 0x64, 0xdd, 0xee, 0xf4, 0xd7, 0x4c, 0x14, 0xcf, 0x51, 0x51,
    0x68, 0x96, 0x71, 0x5d, 0x1f, 0x4d, 0xd4, 0x55, 0x3c, 0x27, 0xfe, 0xd7, 0xee, 0x90, 0x37, 0x33, 0xd4, 0xeb, 0xe5, 0xe5,
    0xda, 0xe6, 0xce, 0xff, 0xb9, 0xca, 0xb4, 0x73, 0x2b, 0x94, 0xb6, 0xc4, 0x5f, 0x9b, 0x6d, 0xef, 0x5c, 0xdb, 0xbc, 0xf8,
    0x77, 0x54, 0xa6, 0x3d, 0x33, 0xfe, 0x4e, 0x8d, 0xed, 0xb4, 0xd3, 0xa7, 0x68, 0xdb, 0xea, 0xf1, 0xd7, 0x41, 0xf1, 0x4f,
    0xd8, 0xe5, 0x59, 0x67, 0x4f, 0x91, 0xd9, 0x64, 0x4c, 0xac, 0x6c, 0xeb, 0xc7, 0x7f, 0xf7, 0x59, 0x7f, 0x47, 0xfc, 0x1d,
    0x6f, 0x53, 0xe5, 0xbb, 0x12, 0x4d, 0x3c, 0xa3, 0xa6, 0x9e, 0x85, 0xb9, 0x2a, 0xa3, 0xb3, 0xe7, 0x9e, 0x03, 0xe6, 0xaf,
    0x74, 0xce, 0xfd, 0xfd, 0xc7, 0x5d, 0xa3, 0x00, 0x0b, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xce, 0xdd, 0x01, 0xba, 0xda, 0x75, 0xd5, 0xa5, 0x73, 0xa8, 0x90, 0x75, 0x91, 0xad, 0xa4, 0xb7, 0xa2, 0x92, 0xee,
    0x33, 0xbf, 0x4c, 0x86, 0x4b, 0xe3, 0xf9, 0x29, 0x9d, 0xd6, 0xdd, 0x95, 0x27, 0x3d, 0x82, 0xd6, 0xd5, 0xfa, 0x4a, 0x8a,
    0x6e, 0x25, 0x55, 0x45, 0xfe, 0x57, 0xc5, 0x5a, 0xad, 0xd9, 0x1d, 0xe5, 0x2e, 0x83, 0xae, 0xb3, 0x92, 0xb6, 0x82, 0x15,
    0xfb, 0x3c, 0x23, 0x6f, 0xde, 0xb3, 0xa9, 0xf7, 0xec, 0xbc, 0x75, 0x9b, 0x8d, 0x7f, 0x72, 0xfc, 0xdf, 0x8f, 0xf1, 0x4c,
    0xf5, 0xc5, 0x7c, 0x55, 0x50, 0xdf, 0xcb, 0xd1, 0x12, 0x23, 0x2b, 0x3f, 0xff, 0x8f, 0xf0, 0xfc, 0xaf, 0x50, 0xfc, 0x67,
    0x6a, 0x6c, 0x57, 0xd6, 0x5b, 0x45, 0x56, 0x68, 0x15, 0x33, 0x3d, 0x7c, 0xa3, 0x24, 0x7d, 0xfd, 0x57, 0x7f, 0xca, 0xbf,
    0x2c, 0x87, 0x4f, 0x45, 0x5b, 0x30, 0x5f, 0x49, 0xb3, 0x77, 0xfc, 0x0f, 0xbb, 0x4e, 0xfb, 0x0a, 0x33, 0x30, 0xf9, 0xa9,
    0x27, 0xf8, 0x70, 0x8a, 0xbd, 0x66, 0x5d, 0xfc, 0x7b, 0x8d, 0xdc, 0xbe, 0xf8, 0xef, 0xf6, 0xe1, 0x66, 0xef, 0x9d, 0xfa,
    0xe2, 0x3f, 0x8c, 0x59, 0x0a, 0x7a, 0xe7, 0x0c, 0x9c, 0xe9, 0xdf, 0xf6, 0x78, 0x85, 0xed, 0x0b, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x1b, 0xc0, 0xc3, 0x70, 0xa9, 0x64, 0x58, 0x56, 0xba, 0x31, 0x30, 0x2a,
    0xde, 0x80, 0xf7, 0xe4, 0x5a, 0xcf, 0x67, 0xaa, 0x7e, 0x93, 0x11, 0xf2, 0x52, 0x55, 0xae, 0xdc, 0x9c, 0x34, 0x00, 0xb3,
    0x2e, 0xe5, 0x8c, 0x69, 0xe8, 0x55, 0x58, 0xae, 0x3c, 0x1d, 0x7f, 0xfd, 0x37, 0x71, 0xde, 0xcd, 0xab, 0x47, 0xed, 0x18,
    0x8e, 0xda, 0x68, 0x72, 0xcc, 0x3c, 0xb3, 0x3d, 0xb3, 0xe7, 0x2e, 0xc3, 0xb7, 0x50, 0xe8, 0xdc, 0x38, 0xf1, 0xf7, 0xe6,
    0x7e, 0x27, 0x3f, 0x41, 0xe6, 0x5c, 0x5e, 0x77, 0x29, 0x64, 0x8e, 0xff, 0x95, 0xfd, 0xd3, 0xad, 0x8e, 0x9a, 0xaa, 0x3a,
    0x9d, 0x8a, 0xff, 0xbd, 0xb1, 0xaf, 0xa6, 0xba, 0xbb, 0x32, 0x0d, 0xd0, 0xfa, 0x98, 0x5a, 0x79, 0xd6, 0x1c, 0xff, 0x79,
    0xd8, 0x79, 0x36, 0x5a, 0xee, 0xf9, 0x39, 0x56, 0x7c, 0xd2, 0x00, 0x5e, 0xe1, 0x6c, 0x69, 0xf1, 0x95, 0x74, 0xbd, 0x1e,
    0xfc, 0xb5, 0xef, 0xab, 0x96, 0x15, 0x4e, 0xd1, 0x6f, 0xa3, 0x48, 0x06, 0xc8, 0x39, 0xae, 0xe7, 0x5a, 0xdf, 0x52, 0x5b,
    0x0d, 0x5c, 0xe7, 0x5a, 0xa6, 0x6b, 0xfe, 0x7f, 0xd7, 0xf8, 0xef, 0x59, 0x4b, 0xce, 0xb1, 0x4a, 0xb5, 0xf8, 0xfa, 0xef,
    0x17, 0xe2, 0xff, 0x46, 0x37, 0x54, 0x58, 0xcd, 0x3f, 0x1d, 0xff, 0x6c, 0x1d, 0xe8, 0xbe, 0xde, 0x74, 0x62, 0xbf, 0x25,
    0x7b, 0xa3, 0xb3, 0xaa, 0x38, 0x79, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x5b, 0xfb, 0x0f,
    0xf5, 0x9a, 0x68, 0x55, 0x1b, 0x47, 0xb7, 0x36, 0xc1, 0x30, 0xbc, 0xe1, 0x11, 0xdb, 0xb7, 0x7e, 0x62, 0xe7, 0x28, 0xd4,
    0x36, 0xd7, 0xac, 0x58, 0x65, 0x3b, 0xaa, 0x60, 0x4a, 0x78, 0x46, 0xee, 0x93, 0x27, 0x1b, 0xa7, 0xab, 0xc0, 0x79, 0x35,
    0x97, 0x15, 0xdb, 0x35, 0xf6, 0xde, 0x2d, 0x5b, 0x8b, 0x76, 0xc5, 0xee, 0xfe, 0x13, 0x5f, 0xd3, 0x8b, 0xbf, 0xc2, 0x4f,
    0xd8, 0xdf, 0xbd, 0x7f, 0xeb, 0x58, 0x8b, 0x3a, 0x68, 0xf7, 0x31, 0x3f, 0xfe, 0x65, 0xcf, 0x0e, 0xc9, 0x11, 0xa1, 0x96,
    0x39, 0xe3, 0xde, 0x69, 0x56, 0xcc, 0xc6, 0x9d, 0xdd, 0x41, 0x5e, 0xbd, 0xfe, 0xcf, 0xcc, 0xff, 0x6e, 0xb5, 0x71, 0xaf,
    0xd6, 0x73, 0x32, 0x43, 0xa7, 0x96, 0xb9, 0xb3, 0xa2, 0xd7, 0xce, 0xae, 0xff, 0x5d, 0x15, 0x5e, 0xbd, 0xeb, 0x3f, 0x45,
    0x73, 0x9a, 0x7a, 0x8f, 0x9c, 0x13, 0x7f, 0xb5, 0xad, 0x91, 0xab, 0xe6, 0xa7, 0x9d, 0xb1, 0x74, 0x33, 0x24, 0x64, 0xdb,
    0xd8, 0xf5, 0x1c, 0x9e, 0x13, 0xec, 0x33, 0x4d, 0xad, 0x52, 0x2a, 0x67, 0xae, 0xd6, 0xd7, 0x4a, 0xef, 0x88, 0xdb, 0x33,
    0x14, 0xcb, 0x44, 0x9d, 0x8b, 0xe1, 0x3b, 0xec, 0x33, 0x35, 0xe4, 0xb4, 0x76, 0x1d, 0xc9, 0x67, 0x03, 0x7c, 0xbf, 0xcf,
    0xf6, 0x5b, 0xf1, 0x1f, 0x8d, 0xe3, 0xff, 0xbb, 0xfb, 0xcb, 0xbe, 0x58, 0xae, 0x18, 0xff, 0xeb, 0xee, 0xff, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x97, 0x76, 0x57, 0x64, 0x5a, 0x77, 0x0a, 0x7e, 0xce, 0x9d, 0x2b,
    0xa3, 0x03, 0xdd, 0x5f, 0x3d, 0xf2, 0x6a, 0xb4, 0xf1, 0xbc, 0xce, 0xba, 0xad, 0x69, 0x53, 0xce, 0xd9, 0x45, 0x51, 0xd4,
    0xa2, 0xe9, 0x74, 0x7f, 0x47, 0x53, 0xcb, 0xd7, 0x99, 0xa1, 0xdd, 0x06, 0xea, 0x99, 0x3b, 0x5b, 0x5e, 0x0d, 0xe0, 0xd1,
    0xf4, 0x44, 0x58, 0x3d, 0x9c, 0x53, 0xea, 0x95, 0xc4, 0xb3, 0x0e, 0xcd, 0x78, 0x30, 0xfb, 0x57, 0xad, 0xd0, 0x64, 0x6d,
    0xe2, 0x74, 0x75, 0x7c, 0x67, 0xdd, 0x58, 0xb7, 0x6b, 0x9d, 0xab, 0x63, 0xbc, 0xca, 0xae, 0x3e, 0xdb, 0xe3, 0x74, 0xfa,
    0xe6, 0x78, 0x49, 0xfc, 0xfb, 0x3c, 0x65, 0xcf, 0x86, 0x7c, 0xa3, 0xe1, 0x23, 0x2b, 0xb7, 0x62, 0x65, 0xfc, 0xeb, 0xbe,
    0xe1, 0x29, 0xe3, 0x5f, 0xaf, 0x8b, 0xbf, 0x0e, 0x8c, 0xff, 0xd9, 0xf3, 0xff, 0x5d, 0xb6, 0xc9, 0xfb, 0x0c, 0xbf, 0xfb,
    0xab, 0x20, 0xe2, 0xff, 0xfd, 0x86, 0xe7, 0x1b, 0xe2, 0x2f, 0x2b, 0x17, 0x59, 0x31, 0xaf, 0xf1, 0xec, 0xf8, 0xe7, 0x6b,
    0x89, 0xee, 0x68, 0x9f, 0x73, 0xf6, 0xf3, 0xf7, 0x7f, 0xd9, 0xbb, 0xdb, 0x9e, 0xfb, 0xbf, 0xde, 0x5f, 0x14, 0xce, 0x68,
    0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0xdf, 0x00, 0xd6, 0xa3, 0x7d, 0xec, 0xd3, 0xdc,
    0xdb, 0x71, 0xfb, 0xfc, 0xfd, 0xf4, 0xd3, 0xa9, 0xf5, 0x3a, 0xab, 0xba, 0x6a, 0xdf, 0x7d, 0xda, 0x7b, 0x7f, 0x9b, 0x7b,
    0x3b, 0xcc, 0x2a, 0x93, 0x7d, 0x56, 0xee, 0x39, 0xf6, 0xaf, 0x5f, 0xc1, 0xee, 0x64, 0xf7, 0xd6, 0xb1, 0x5d, 0x3b, 0x5b,
    0xde, 0xff, 0x29, 0xe9, 0x0a, 0x96, 0xbd, 0x7b, 0xaf, 0xf5, 0x8a, 0x4c, 0xce, 0xba, 0xd5, 0x63, 0x0d, 0xe7, 0xcf, 0x8f,
    0x36, 0x38, 0x07, 0x5d, 0x47, 0xdc, 0xfa, 0x89, 0xfb, 0xad, 0xd1, 0x1e, 0xab, 0x26, 0x11, 0x7f, 0xcf, 0x7c, 0xaf, 0x57,
    0x29, 0xad, 0x1f, 0x91, 0xdd, 0x67, 0x86, 0x31, 0x62, 0x57, 0x54, 0x0c, 0x3d, 0xc7, 0xaa, 0x7b, 0x6f, 0x75, 0xe5, 0x74,
    0x35, 0xdc, 0xce, 0x31, 0x79, 0xca, 0xf8, 0x77, 0xdb, 0xe2, 0x59, 0xb9, 0xa9, 0x23, 0xc3, 0xca, 0x0b, 0x9a, 0xbb, 0x0f,
    0xee, 0xb0, 0xf2, 0xf6, 0x58, 0x95, 0x8a, 0xdd, 0xa5, 0x8c, 0xcb, 0xdc, 0xd6, 0xe4, 0x91, 0xb1, 0x20, 0xbf, 0x4e, 0x5b,
    0xad, 0xbc, 0x7d, 0x56, 0xa5, 0x16, 0xff, 0x7d, 0xff, 0x9d, 0x21, 0x35, 0x71, 0xbf, 0x27, 0x9e, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0xdd, 0x2f, 0x39, 0xb5, 0xc2, 0xee, 0x78, 0x50, 0xb9, 0x66, 0x7f, 0x85,
    0xdd, 0xba, 0x55, 0xbd, 0x6b, 0x2f, 0xa6, 0x6e, 0xdf, 0xee, 0xb6, 0x7c, 0x87, 0x69, 0x58, 0xec, 0x76, 0x79, 0xcf, 0xdb,
    0x6b, 0x3b, 0x79, 0xbf, 0xb4, 0xee, 0x64, 0x9d, 0x57, 0x61, 0xb7, 0xe6, 0xce, 0x74, 0x47, 0xe2, 0xda, 0xbe, 0xd1, 0x56,
    0xcb, 0xd7, 0xaf, 0xb0, 0xb9, 0xbb, 0xc2, 0x6e, 0xb6, 0x6e, 0xe9, 0x9e, 0x3e, 0x7c, 0x7a, 0x85, 0x55, 0xdd, 0xe4, 0x26,
    0x9d, 0x1a, 0xff, 0xf1, 0x9a, 0xf8, 0xbf, 0xf3, 0x8c, 0xe8, 0x80, 0x0a, 0x9b, 0xae, 0x19, 0xd8, 0xbf, 0x0e, 0x7f, 0x5b,
    0xfc, 0xd5, 0xfe, 0x6d, 0x55, 0x7c, 0x36, 0x88, 0x8e, 0x8a, 0xbf, 0x97, 0xa9, 0xd2, 0x37, 0x22, 0x56, 0x54, 0xd8, 0x5c,
    0x6f, 0x21, 0xdf, 0xdd, 0xd1, 0xea, 0x05, 0x26, 0xde, 0xf7, 0x56, 0xd8, 0x5c, 0x6f, 0x21, 0x8f, 0x70, 0x8e, 0x2f, 0x7c,
    0x8b, 0x55, 0x2b, 0x23, 0xa7, 0x1e, 0xde, 0xf9, 0x9b, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x22, 0xa2, 0x3a, 0x25, 0xf1, 0xe7, 0x3c, 0xfc, 0x76,
    0xfc, 0xff, 0x01 };

// Font glyphs rectangles data (on atlas)
static const Rectangle rltechFontRecs[189] = {
    { 4, 4, 7 , 14 },
    { 19, 4, 1 , 8 },
    { 28, 4, 3 , 3 },
    { 39, 4, 7 , 8 },
    { 54, 4, 5 , 10 },
    { 67, 4, 6 , 8 },
    { 81, 4, 6 , 8 },
    { 95, 4, 1 , 3 },
    { 104, 4, 3 , 10 },
    { 115, 4, 3 , 10 },
    { 126, 4, 5 , 5 },
    { 139, 4, 5 , 5 },
    { 152, 4, 2 , 3 },
    { 162, 4, 3 , 1 },
    { 173, 4, 1 , 2 },
    { 182, 4, 5 , 10 },
    { 195, 4, 5 , 8 },
    { 208, 4, 5 , 8 },
    { 221, 4, 5 , 8 },
    { 234, 4, 5 , 8 },
    { 4, 26, 5 , 8 },
    { 17, 26, 5 , 8 },
    { 30, 26, 5 , 8 },
    { 43, 26, 5 , 8 },
    { 56, 26, 5 , 8 },
    { 69, 26, 5 , 8 },
    { 82, 26, 1 , 6 },
    { 91, 26, 2 , 7 },
    { 101, 26, 4 , 7 },
    { 113, 26, 5 , 3 },
    { 126, 26, 4 , 7 },
    { 138, 26, 5 , 8 },
    { 151, 26, 5 , 8 },
    { 164, 26, 5 , 8 },
    { 177, 26, 5 , 8 },
    { 190, 26, 5 , 8 },
    { 203, 26, 5 , 8 },
    { 216, 26, 5 , 8 },
    { 229, 26, 5 , 8 },
    { 242, 26, 5 , 8 },
    { 4, 48, 5 , 8 },
    { 17, 48, 5 , 8 },
    { 30, 48, 5 , 8 },
    { 43, 48, 5 , 8 },
    { 56, 48, 5 , 8 },
    { 69, 48, 5 , 8 },
    { 82, 48, 5 , 8 },
    { 95, 48, 5 , 8 },
    { 108, 48, 5 , 8 },
    { 121, 48, 5 , 9 },
    { 134, 48, 5 , 8 },
    { 147, 48, 5 , 8 },
    { 160, 48, 5 , 8 },
    { 173, 48, 5 , 8 },
    { 186, 48, 5 , 8 },
    { 199, 48, 5 , 8 },
    { 212, 48, 5 , 8 },
    { 225, 48, 5 , 8 },
    { 238, 48, 5 , 8 },
    { 4, 70, 3 , 10 },
    { 15, 70, 5 , 10 },
    { 28, 70, 3 , 10 },
    { 39, 70, 3 , 2 },
    { 50, 70, 5 , 1 },
    { 63, 70, 2 , 2 },
    { 73, 70, 5 , 6 },
    { 86, 70, 5 , 8 },
    { 99, 70, 5 , 6 },
    { 112, 70, 5 , 8 },
    { 125, 70, 5 , 6 },
    { 138, 70, 5 , 8 },
    { 151, 70, 5 , 8 },
    { 164, 70, 5 , 8 },
    { 177, 70, 5 , 8 },
    { 190, 70, 4 , 10 },
    { 202, 70, 5 , 8 },
    { 215, 70, 5 , 8 },
    { 228, 70, 5 , 6 },
    { 241, 70, 5 , 6 },
    { 4, 92, 5 , 6 },
    { 17, 92, 5 , 8 },
    { 30, 92, 5 , 8 },
    { 43, 92, 5 , 6 },
    { 56, 92, 5 , 6 },
    { 69, 92, 5 , 8 },
    { 82, 92, 5 , 6 },
    { 95, 92, 5 , 6 },
    { 108, 92, 5 , 6 },
    { 121, 92, 5 , 6 },
    { 134, 92, 5 , 8 },
    { 147, 92, 5 , 6 },
    { 160, 92, 5 , 10 },
    { 173, 92, 1 , 10 },
    { 182, 92, 5 , 10 },
    { 195, 92, 5 , 3 },
    { 208, 92, 1 , 8 },
    { 217, 92, 5 , 7 },
    { 230, 92, 5 , 8 },
    { 4, 114, 6 , 8 },
    { 18, 114, 5 , 8 },
    { 31, 114, 5 , 11 },
    { 44, 114, 5 , 9 },
    { 57, 114, 5 , 9 },
    { 70, 114, 5 , 12 },
    { 83, 114, 5 , 5 },
    { 96, 114, 6 , 5 },
    { 110, 114, 5 , 3 },
    { 123, 114, 5 , 12 },
    { 136, 114, 3 , 1 },
    { 147, 114, 3 , 3 },
    { 158, 114, 5 , 7 },
    { 171, 114, 5 , 6 },
    { 184, 114, 5 , 6 },
    { 197, 114, 5 , 11 },
    { 210, 114, 5 , 8 },
    { 223, 114, 5 , 8 },
    { 236, 114, 1 , 2 },
    { 4, 136, 5 , 9 },
    { 17, 136, 3 , 6 },
    { 28, 136, 5 , 5 },
    { 41, 136, 6 , 5 },
    { 55, 136, 7 , 8 },
    { 70, 136, 7 , 6 },
    { 85, 136, 5 , 10 },
    { 98, 136, 5 , 8 },
    { 111, 136, 5 , 11 },
    { 124, 136, 5 , 11 },
    { 137, 136, 5 , 11 },
    { 150, 136, 5 , 11 },
    { 163, 136, 5 , 10 },
    { 176, 136, 5 , 11 },
    { 189, 136, 7 , 8 },
    { 204, 136, 5 , 11 },
    { 217, 136, 5 , 11 },
    { 230, 136, 5 , 11 },
    { 4, 158, 5 , 11 },
    { 17, 158, 5 , 10 },
    { 30, 158, 5 , 11 },
    { 43, 158, 5 , 11 },
    { 56, 158, 5 , 11 },
    { 69, 158, 5 , 10 },
    { 82, 158, 6 , 8 },
    { 96, 158, 5 , 11 },
    { 109, 158, 5 , 11 },
    { 122, 158, 5 , 11 },
    { 135, 158, 5 , 11 },
    { 148, 158, 5 , 11 },
    { 161, 158, 5 , 10 },
    { 174, 158, 5 , 5 },
    { 187, 158, 7 , 8 },
    { 202, 158, 5 , 11 },
    { 215, 158, 5 , 11 },
    { 228, 158, 5 , 11 },
    { 241, 158, 5 , 10 },
    { 4, 180, 5 , 11 },
    { 17, 180, 5 , 8 },
    { 30, 180, 5 , 10 },
    { 43, 180, 5 , 9 },
    { 56, 180, 5 , 9 },
    { 69, 180, 5 , 9 },
    { 82, 180, 5 , 9 },
    { 95, 180, 5 , 8 },
    { 108, 180, 5 , 10 },
    { 121, 180, 7 , 6 },
    { 136, 180, 5 , 9 },
    { 149, 180, 5 , 9 },
    { 162, 180, 5 , 9 },
    { 175, 180, 5 , 9 },
    { 188, 180, 5 , 8 },
    { 201, 180, 5 , 9 },
    { 214, 180, 5 , 9 },
    { 227, 180, 5 , 9 },
    { 240, 180, 5 , 8 },
    { 4, 202, 5 , 8 },
    { 17, 202, 5 , 9 },
    { 30, 202, 5 , 9 },
    { 43, 202, 5 , 9 },
    { 56, 202, 5 , 9 },
    { 69, 202, 5 , 9 },
    { 82, 202, 5 , 8 },
    { 95, 202, 5 , 5 },
    { 108, 202, 7 , 7 },
    { 123, 202, 5 , 9 },
    { 136, 202, 5 , 9 },
    { 149, 202, 5 , 9 },
    { 162, 202, 5 , 8 },
    { 175, 202, 5 , 11 },
    { 188, 202, 5 , 10 },
    { 201, 202, 5 , 10 },
};

// Font glyphs info data
// NOTE: No glyphs.image data provided
static const GlyphInfo rltechFontGlyphs[189] = {
    { 32, 0, 0, 7, { 0 }},
    { 33, 3, 3, 7, { 0 }},
    { 34, 2, 3, 7, { 0 }},
    { 35, 0, 3, 7, { 0 }},
    { 36, 1, 2, 7, { 0 }},
    { 37, 1, 3, 7, { 0 }},
    { 38, 1, 3, 7, { 0 }},
    { 39, 3, 3, 7, { 0 }},
    { 40, 2, 2, 7, { 0 }},
    { 41, 2, 2, 7, { 0 }},
    { 42, 1, 3, 7, { 0 }},
    { 43, 1, 5, 7, { 0 }},
    { 44, 2, 9, 7, { 0 }},
    { 45, 2, 7, 7, { 0 }},
    { 46, 3, 9, 7, { 0 }},
    { 47, 1, 2, 7, { 0 }},
    { 48, 1, 3, 7, { 0 }},
    { 49, 1, 3, 7, { 0 }},
    { 50, 1, 3, 7, { 0 }},
    { 51, 1, 3, 7, { 0 }},
    { 52, 1, 3, 7, { 0 }},
    { 53, 1, 3, 7, { 0 }},
    { 54, 1, 3, 7, { 0 }},
    { 55, 1, 3, 7, { 0 }},
    { 56, 1, 3, 7, { 0 }},
    { 57, 1, 3, 7, { 0 }},
    { 58, 3, 5, 7, { 0 }},
    { 59, 2, 5, 7, { 0 }},
    { 60, 1, 4, 7, { 0 }},
    { 61, 1, 6, 7, { 0 }},
    { 62, 2, 4, 7, { 0 }},
    { 63, 1, 3, 7, { 0 }},
    { 64, 1, 3, 7, { 0 }},
    { 65, 1, 3, 7, { 0 }},
    { 66, 1, 3, 7, { 0 }},
    { 67, 1, 3, 7, { 0 }},
    { 68, 1, 3, 7, { 0 }},
    { 69, 1, 3, 7, { 0 }},
    { 70, 1, 3, 7, { 0 }},
    { 71, 1, 3, 7, { 0 }},
    { 72, 1, 3, 7, { 0 }},
    { 73, 1, 3, 7, { 0 }},
    { 74, 1, 3, 7, { 0 }},
    { 75, 1, 3, 7, { 0 }},
    { 76, 1, 3, 7, { 0 }},
    { 77, 1, 3, 7, { 0 }},
    { 78, 1, 3, 7, { 0 }},
    { 79, 1, 3, 7, { 0 }},
    { 80, 1, 3, 7, { 0 }},
    { 81, 1, 3, 7, { 0 }},
    { 82, 1, 3, 7, { 0 }},
    { 83, 1, 3, 7, { 0 }},
    { 84, 1, 3, 7, { 0 }},
    { 85, 1, 3, 7, { 0 }},
    { 86, 1, 3, 7, { 0 }},
    { 87, 1, 3, 7, { 0 }},
    { 88, 1, 3, 7, { 0 }},
    { 89, 1, 3, 7, { 0 }},
    { 90, 1, 3, 7, { 0 }},
    { 91, 2, 2, 7, { 0 }},
    { 92, 1, 2, 7, { 0 }},
    { 93, 2, 2, 7, { 0 }},
    { 94, 2, 3, 7, { 0 }},
    { 95, 1, 10, 7, { 0 }},
    { 96, 2, 2, 7, { 0 }},
    { 97, 1, 5, 7, { 0 }},
    { 98, 1, 3, 7, { 0 }},
    { 99, 1, 5, 7, { 0 }},
    { 100, 1, 3, 7, { 0 }},
    { 101, 1, 5, 7, { 0 }},
    { 102, 1, 3, 7, { 0 }},
    { 103, 1, 5, 7, { 0 }},
    { 104, 1, 3, 7, { 0 }},
    { 105, 1, 3, 7, { 0 }},
    { 106, 1, 3, 7, { 0 }},
    { 107, 1, 3, 7, { 0 }},
    { 108, 1, 3, 7, { 0 }},
    { 109, 1, 5, 7, { 0 }},
    { 110, 1, 5, 7, { 0 }},
    { 111, 1, 5, 7, { 0 }},
    { 112, 1, 5, 7, { 0 }},
    { 113, 1, 5, 7, { 0 }},
    { 114, 1, 5, 7, { 0 }},
    { 115, 1, 5, 7, { 0 }},
    { 116, 1, 3, 7, { 0 }},
    { 117, 1, 5, 7, { 0 }},
    { 118, 1, 5, 7, { 0 }},
    { 119, 1, 5, 7, { 0 }},
    { 120, 1, 5, 7, { 0 }},
    { 121, 1, 5, 7, { 0 }},
    { 122, 1, 5, 7, { 0 }},
    { 123, 0, 2, 7, { 0 }},
    { 124, 3, 2, 7, { 0 }},
    { 125, 2, 2, 7, { 0 }},
    { 126, 1, 6, 7, { 0 }},
    { 161, 3, 5, 7, { 0 }},
    { 162, 1, 4, 7, { 0 }},
    { 163, 1, 3, 7, { 0 }},
    { 8364, 0, 3, 7, { 0 }},
    { 165, 1, 3, 7, { 0 }},
    { 352, 1, 0, 7, { 0 }},
    { 167, 1, 3, 7, { 0 }},
    { 353, 1, 2, 7, { 0 }},
    { 169, 1, 1, 7, { 0 }},
    { 170, 1, 3, 7, { 0 }},
    { 171, 0, 5, 7, { 0 }},
    { 172, 1, 7, 7, { 0 }},
    { 174, 1, 1, 7, { 0 }},
    { 175, 2, 3, 7, { 0 }},
    { 176, 2, 3, 7, { 0 }},
    { 177, 1, 4, 7, { 0 }},
    { 178, 1, 2, 7, { 0 }},
    { 179, 1, 2, 7, { 0 }},
    { 381, 1, 0, 7, { 0 }},
    { 181, 1, 5, 7, { 0 }},
    { 182, 1, 3, 7, { 0 }},
    { 183, 3, 6, 7, { 0 }},
    { 382, 1, 2, 7, { 0 }},
    { 185, 2, 2, 7, { 0 }},
    { 186, 1, 3, 7, { 0 }},
    { 187, 1, 5, 7, { 0 }},
    { 338, 0, 3, 7, { 0 }},
    { 339, 0, 5, 7, { 0 }},
    { 376, 1, 1, 7, { 0 }},
    { 191, 1, 5, 7, { 0 }},
    { 192, 1, 0, 7, { 0 }},
    { 193, 1, 0, 7, { 0 }},
    { 194, 1, 0, 7, { 0 }},
    { 195, 1, 0, 7, { 0 }},
    { 196, 1, 1, 7, { 0 }},
    { 197, 1, 0, 7, { 0 }},
    { 198, 0, 3, 7, { 0 }},
    { 199, 1, 3, 7, { 0 }},
    { 200, 1, 0, 7, { 0 }},
    { 201, 1, 0, 7, { 0 }},
    { 202, 1, 0, 7, { 0 }},
    { 203, 1, 1, 7, { 0 }},
    { 204, 1, 0, 7, { 0 }},
    { 205, 1, 0, 7, { 0 }},
    { 206, 1, 0, 7, { 0 }},
    { 207, 1, 1, 7, { 0 }},
    { 208, 0, 3, 7, { 0 }},
    { 209, 1, 0, 7, { 0 }},
    { 210, 1, 0, 7, { 0 }},
    { 211, 1, 0, 7, { 0 }},
    { 212, 1, 0, 7, { 0 }},
    { 213, 1, 0, 7, { 0 }},
    { 214, 1, 1, 7, { 0 }},
    { 215, 1, 5, 7, { 0 }},
    { 216, 0, 3, 7, { 0 }},
    { 217, 1, 0, 7, { 0 }},
    { 218, 1, 0, 7, { 0 }},
    { 219, 1, 0, 7, { 0 }},
    { 220, 1, 1, 7, { 0 }},
    { 221, 1, 0, 7, { 0 }},
    { 222, 1, 3, 7, { 0 }},
    { 223, 1, 3, 7, { 0 }},
    { 224, 1, 2, 7, { 0 }},
    { 225, 1, 2, 7, { 0 }},
    { 226, 1, 2, 7, { 0 }},
    { 227, 1, 2, 7, { 0 }},
    { 228, 1, 3, 7, { 0 }},
    { 229, 1, 1, 7, { 0 }},
    { 230, 0, 5, 7, { 0 }},
    { 231, 1, 5, 7, { 0 }},
    { 232, 1, 2, 7, { 0 }},
    { 233, 1, 2, 7, { 0 }},
    { 234, 1, 2, 7, { 0 }},
    { 235, 1, 3, 7, { 0 }},
    { 236, 1, 2, 7, { 0 }},
    { 237, 1, 2, 7, { 0 }},
    { 238, 1, 2, 7, { 0 }},
    { 239, 1, 3, 7, { 0 }},
    { 240, 1, 3, 7, { 0 }},
    { 241, 1, 2, 7, { 0 }},
    { 242, 1, 2, 7, { 0 }},
    { 243, 1, 2, 7, { 0 }},
    { 244, 1, 2, 7, { 0 }},
    { 245, 1, 2, 7, { 0 }},
    { 246, 1, 3, 7, { 0 }},
    { 247, 1, 5, 7, { 0 }},
    { 248, 0, 5, 7, { 0 }},
    { 249, 1, 2, 7, { 0 }},
    { 250, 1, 2, 7, { 0 }},
    { 251, 1, 2, 7, { 0 }},
    { 252, 1, 3, 7, { 0 }},
    { 253, 1, 2, 7, { 0 }},
    { 254, 1, 3, 7, { 0 }},
    { 255, 1, 3, 7, { 0 }},
};

// Style loading function: RLtech
static void GuiLoadStyleRLtech(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < RLTECH_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(rltechStyleProps[i].controlId, rltechStyleProps[i].propertyId, rltechStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int rltechFontDataSize = 0;
    unsigned char *data = DecompressData(rltechFontData, RLTECH_STYLE_FONT_ATLAS_COMP_SIZE, &rltechFontDataSize);
    Image imFont = { data, 256, 256, 1, 2 };

    Font font = { 0 };
    font.baseSize = 14;
    font.glyphCount = 189;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);
    UnloadImage(imFont);  // Uncompressed image data can be unloaded from memory

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)RAYGUI_MALLOC(font.glyphCount*sizeof(Rectangle));
    memcpy(font.recs, rltechFontRecs, font.glyphCount*sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)RAYGUI_MALLOC(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, rltechFontGlyphs, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // it makes possible to draw shapes and text (full UI) in a single draw call
    Rectangle fontWhiteRec = { 254, 254, 1, 1 };
    SetShapesTexture(font.texture, fontWhiteRec);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
