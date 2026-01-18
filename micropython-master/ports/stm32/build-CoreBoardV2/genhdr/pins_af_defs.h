#define STATIC_AF_TIM2_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM2_ETR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM5_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_H10_obj)")  & strcmp( #pin_obj , "((&pin_H10_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_ETR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_I3_obj)")  & strcmp( #pin_obj , "((&pin_I3_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_CTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D3_obj)")  & strcmp( #pin_obj , "((&pin_D3_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_UART4_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_CRS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_H2_obj)")  & strcmp( #pin_obj , "((&pin_H2_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_EVENTOUT_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A13_obj)")  & strcmp( #pin_obj , "((&pin_A13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A14_obj)")  & strcmp( #pin_obj , "((&pin_A14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B11_obj)")  & strcmp( #pin_obj , "((&pin_B11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B2_obj)")  & strcmp( #pin_obj , "((&pin_B2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C0_obj)")  & strcmp( #pin_obj , "((&pin_C0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C13_obj)")  & strcmp( #pin_obj , "((&pin_C13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C14_obj)")  & strcmp( #pin_obj , "((&pin_C14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C15_obj)")  & strcmp( #pin_obj , "((&pin_C15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C1_obj)")  & strcmp( #pin_obj , "((&pin_C1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C2_obj)")  & strcmp( #pin_obj , "((&pin_C2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C3_obj)")  & strcmp( #pin_obj , "((&pin_C3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C4_obj)")  & strcmp( #pin_obj , "((&pin_C4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C5_obj)")  & strcmp( #pin_obj , "((&pin_C5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D0_obj)")  & strcmp( #pin_obj , "((&pin_D0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D10_obj)")  & strcmp( #pin_obj , "((&pin_D10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D11_obj)")  & strcmp( #pin_obj , "((&pin_D11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D12_obj)")  & strcmp( #pin_obj , "((&pin_D12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D13_obj)")  & strcmp( #pin_obj , "((&pin_D13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D14_obj)")  & strcmp( #pin_obj , "((&pin_D14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D15_obj)")  & strcmp( #pin_obj , "((&pin_D15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D1_obj)")  & strcmp( #pin_obj , "((&pin_D1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D2_obj)")  & strcmp( #pin_obj , "((&pin_D2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D3_obj)")  & strcmp( #pin_obj , "((&pin_D3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D4_obj)")  & strcmp( #pin_obj , "((&pin_D4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D5_obj)")  & strcmp( #pin_obj , "((&pin_D5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D6_obj)")  & strcmp( #pin_obj , "((&pin_D6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D7_obj)")  & strcmp( #pin_obj , "((&pin_D7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D8_obj)")  & strcmp( #pin_obj , "((&pin_D8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D9_obj)")  & strcmp( #pin_obj , "((&pin_D9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E0_obj)")  & strcmp( #pin_obj , "((&pin_E0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E10_obj)")  & strcmp( #pin_obj , "((&pin_E10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E11_obj)")  & strcmp( #pin_obj , "((&pin_E11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E12_obj)")  & strcmp( #pin_obj , "((&pin_E12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E13_obj)")  & strcmp( #pin_obj , "((&pin_E13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E14_obj)")  & strcmp( #pin_obj , "((&pin_E14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E15_obj)")  & strcmp( #pin_obj , "((&pin_E15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E1_obj)")  & strcmp( #pin_obj , "((&pin_E1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E2_obj)")  & strcmp( #pin_obj , "((&pin_E2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E3_obj)")  & strcmp( #pin_obj , "((&pin_E3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E4_obj)")  & strcmp( #pin_obj , "((&pin_E4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E5_obj)")  & strcmp( #pin_obj , "((&pin_E5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E6_obj)")  & strcmp( #pin_obj , "((&pin_E6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E7_obj)")  & strcmp( #pin_obj , "((&pin_E7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E8_obj)")  & strcmp( #pin_obj , "((&pin_E8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_E9_obj)")  & strcmp( #pin_obj , "((&pin_E9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F0_obj)")  & strcmp( #pin_obj , "((&pin_F0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F10_obj)")  & strcmp( #pin_obj , "((&pin_F10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F11_obj)")  & strcmp( #pin_obj , "((&pin_F11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F12_obj)")  & strcmp( #pin_obj , "((&pin_F12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F13_obj)")  & strcmp( #pin_obj , "((&pin_F13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F14_obj)")  & strcmp( #pin_obj , "((&pin_F14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F15_obj)")  & strcmp( #pin_obj , "((&pin_F15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F1_obj)")  & strcmp( #pin_obj , "((&pin_F1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F2_obj)")  & strcmp( #pin_obj , "((&pin_F2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F3_obj)")  & strcmp( #pin_obj , "((&pin_F3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F4_obj)")  & strcmp( #pin_obj , "((&pin_F4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F5_obj)")  & strcmp( #pin_obj , "((&pin_F5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F6_obj)")  & strcmp( #pin_obj , "((&pin_F6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F7_obj)")  & strcmp( #pin_obj , "((&pin_F7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F8_obj)")  & strcmp( #pin_obj , "((&pin_F8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_F9_obj)")  & strcmp( #pin_obj , "((&pin_F9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G0_obj)")  & strcmp( #pin_obj , "((&pin_G0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G10_obj)")  & strcmp( #pin_obj , "((&pin_G10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G11_obj)")  & strcmp( #pin_obj , "((&pin_G11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G12_obj)")  & strcmp( #pin_obj , "((&pin_G12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G13_obj)")  & strcmp( #pin_obj , "((&pin_G13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G14_obj)")  & strcmp( #pin_obj , "((&pin_G14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G15_obj)")  & strcmp( #pin_obj , "((&pin_G15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G1_obj)")  & strcmp( #pin_obj , "((&pin_G1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G2_obj)")  & strcmp( #pin_obj , "((&pin_G2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G3_obj)")  & strcmp( #pin_obj , "((&pin_G3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G4_obj)")  & strcmp( #pin_obj , "((&pin_G4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G5_obj)")  & strcmp( #pin_obj , "((&pin_G5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G6_obj)")  & strcmp( #pin_obj , "((&pin_G6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G7_obj)")  & strcmp( #pin_obj , "((&pin_G7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G8_obj)")  & strcmp( #pin_obj , "((&pin_G8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_G9_obj)")  & strcmp( #pin_obj , "((&pin_G9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H0_obj)")  & strcmp( #pin_obj , "((&pin_H0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H10_obj)")  & strcmp( #pin_obj , "((&pin_H10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H11_obj)")  & strcmp( #pin_obj , "((&pin_H11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H12_obj)")  & strcmp( #pin_obj , "((&pin_H12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H13_obj)")  & strcmp( #pin_obj , "((&pin_H13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H14_obj)")  & strcmp( #pin_obj , "((&pin_H14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H15_obj)")  & strcmp( #pin_obj , "((&pin_H15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H1_obj)")  & strcmp( #pin_obj , "((&pin_H1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H2_obj)")  & strcmp( #pin_obj , "((&pin_H2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H3_obj)")  & strcmp( #pin_obj , "((&pin_H3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H4_obj)")  & strcmp( #pin_obj , "((&pin_H4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H5_obj)")  & strcmp( #pin_obj , "((&pin_H5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H6_obj)")  & strcmp( #pin_obj , "((&pin_H6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H7_obj)")  & strcmp( #pin_obj , "((&pin_H7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H8_obj)")  & strcmp( #pin_obj , "((&pin_H8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_H9_obj)")  & strcmp( #pin_obj , "((&pin_H9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I0_obj)")  & strcmp( #pin_obj , "((&pin_I0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I10_obj)")  & strcmp( #pin_obj , "((&pin_I10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I11_obj)")  & strcmp( #pin_obj , "((&pin_I11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I1_obj)")  & strcmp( #pin_obj , "((&pin_I1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I2_obj)")  & strcmp( #pin_obj , "((&pin_I2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I3_obj)")  & strcmp( #pin_obj , "((&pin_I3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I4_obj)")  & strcmp( #pin_obj , "((&pin_I4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I5_obj)")  & strcmp( #pin_obj , "((&pin_I5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I6_obj)")  & strcmp( #pin_obj , "((&pin_I6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I7_obj)")  & strcmp( #pin_obj , "((&pin_I7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I8_obj)")  & strcmp( #pin_obj , "((&pin_I8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_I9_obj)")  & strcmp( #pin_obj , "((&pin_I9_obj))")) == 0) ? (15) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM2_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM5_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_H11_obj)")  & strcmp( #pin_obj , "((&pin_H11_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_RTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D4_obj)")  & strcmp( #pin_obj , "((&pin_D4_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_UART4_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_RX_CLK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_RMII_REF_CLK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM2_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM5_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_H12_obj)")  & strcmp( #pin_obj , "((&pin_H12_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM9_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_E5_obj)")  & strcmp( #pin_obj , "((&pin_E5_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D5_obj)")  & strcmp( #pin_obj , "((&pin_D5_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MDIO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM2_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B11_obj)")  & strcmp( #pin_obj , "((&pin_B11_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM5_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_I0_obj)")  & strcmp( #pin_obj , "((&pin_I0_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM9_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_E6_obj)")  & strcmp( #pin_obj , "((&pin_E6_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D6_obj)")  & strcmp( #pin_obj , "((&pin_D6_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_D0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_COL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_H3_obj)")  & strcmp( #pin_obj , "((&pin_H3_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI1_NSS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI3_NSS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_WS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D7_obj)")  & strcmp( #pin_obj , "((&pin_D7_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_SOF(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_HSYNC(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_H8_obj)")  & strcmp( #pin_obj , "((&pin_H8_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_CH1N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_H13_obj)")  & strcmp( #pin_obj , "((&pin_H13_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI1_SCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_BKIN(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E15_obj)")  & strcmp( #pin_obj , "((&pin_E15_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_BKIN(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_I4_obj)")  & strcmp( #pin_obj , "((&pin_I4_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI1_MISO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM13_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_F8_obj)")  & strcmp( #pin_obj , "((&pin_F8_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_PIXCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH1N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E8_obj)")  & strcmp( #pin_obj , "((&pin_E8_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI1_MOSI(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM14_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_F9_obj)")  & strcmp( #pin_obj , "((&pin_F9_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_RX_DV(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_RMII_CRS_DV(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_MCO1_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E9_obj)")  & strcmp( #pin_obj , "((&pin_E9_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C3_SCL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_H7_obj)")  & strcmp( #pin_obj , "((&pin_H7_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_FS_SOF(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E11_obj)")  & strcmp( #pin_obj , "((&pin_E11_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C3_SMBA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_H9_obj)")  & strcmp( #pin_obj , "((&pin_H9_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_H9_obj)")  & strcmp( #pin_obj , "((&pin_H9_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E13_obj)")  & strcmp( #pin_obj , "((&pin_E13_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_FS_ID(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_H10_obj)")  & strcmp( #pin_obj , "((&pin_H10_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E14_obj)")  & strcmp( #pin_obj , "((&pin_E14_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_CTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_CAN1_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_D0_obj)")  & strcmp( #pin_obj , "((&pin_D0_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_I9_obj)")  & strcmp( #pin_obj , "((&pin_I9_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_FS_DM(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_ETR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E7_obj)")  & strcmp( #pin_obj , "((&pin_E7_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_RTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_CAN1_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_D1_obj)")  & strcmp( #pin_obj , "((&pin_D1_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_H13_obj)")  & strcmp( #pin_obj , "((&pin_H13_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_FS_DP(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_JTMS_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A13_obj)")  & strcmp( #pin_obj , "((&pin_A13_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SWDIO_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A13_obj)")  & strcmp( #pin_obj , "((&pin_A13_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_JTCK_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A14_obj)")  & strcmp( #pin_obj , "((&pin_A14_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SWCLK_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A14_obj)")  & strcmp( #pin_obj , "((&pin_A14_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_JTDI_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH2N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E10_obj)")  & strcmp( #pin_obj , "((&pin_E10_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_CH2N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_H14_obj)")  & strcmp( #pin_obj , "((&pin_H14_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_D1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_RXD2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_H6_obj)")  & strcmp( #pin_obj , "((&pin_H6_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH3N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_E12_obj)")  & strcmp( #pin_obj , "((&pin_E12_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_CH3N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_H15_obj)")  & strcmp( #pin_obj , "((&pin_H15_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_D2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_RXD3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_H7_obj)")  & strcmp( #pin_obj , "((&pin_H7_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_JTDO_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TRACESWO_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI3_SCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_NJTRST_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI3_MISO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_EXTSD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C1_SMBA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI3_MOSI(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_SD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_CAN2_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_D7(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_PPS_OUT(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_G8_obj)")  & strcmp( #pin_obj , "((&pin_G8_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D10(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_I3_obj)")  & strcmp( #pin_obj , "((&pin_I3_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_D12_obj)")  & strcmp( #pin_obj , "((&pin_D12_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C1_SCL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_CAN2_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D5(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_I4_obj)")  & strcmp( #pin_obj , "((&pin_I4_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_D13_obj)")  & strcmp( #pin_obj , "((&pin_D13_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C1_SDA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_VSYNC(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_I5_obj)")  & strcmp( #pin_obj , "((&pin_I5_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_D14_obj)")  & strcmp( #pin_obj , "((&pin_D14_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM10_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_F6_obj)")  & strcmp( #pin_obj , "((&pin_F6_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_TXD3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_E2_obj)")  & strcmp( #pin_obj , "((&pin_E2_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D6(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_E5_obj)")  & strcmp( #pin_obj , "((&pin_E5_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_I6_obj)")  & strcmp( #pin_obj , "((&pin_I6_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_D15_obj)")  & strcmp( #pin_obj , "((&pin_D15_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM11_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_F7_obj)")  & strcmp( #pin_obj , "((&pin_F7_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI2_NSS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_I0_obj)")  & strcmp( #pin_obj , "((&pin_I0_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_WS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_I0_obj)")  & strcmp( #pin_obj , "((&pin_I0_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D5(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D7(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_E6_obj)")  & strcmp( #pin_obj , "((&pin_E6_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_I7_obj)")  & strcmp( #pin_obj , "((&pin_I7_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C2_SCL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_F1_obj)")  & strcmp( #pin_obj , "((&pin_F1_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_H4_obj)")  & strcmp( #pin_obj , "((&pin_H4_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI2_SCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_I1_obj)")  & strcmp( #pin_obj , "((&pin_I1_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_I1_obj)")  & strcmp( #pin_obj , "((&pin_I1_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART3_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D8_obj)")  & strcmp( #pin_obj , "((&pin_D8_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_D3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_RX_ER(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_I10_obj)")  & strcmp( #pin_obj , "((&pin_I10_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C2_SDA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B11_obj)")  & strcmp( #pin_obj , "((&pin_B11_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_F0_obj)")  & strcmp( #pin_obj , "((&pin_F0_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_H5_obj)")  & strcmp( #pin_obj , "((&pin_H5_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART3_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B11_obj)")  & strcmp( #pin_obj , "((&pin_B11_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D9_obj)")  & strcmp( #pin_obj , "((&pin_D9_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_D4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B11_obj)")  & strcmp( #pin_obj , "((&pin_B11_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_TX_EN(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B11_obj)")  & strcmp( #pin_obj , "((&pin_B11_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_G11_obj)")  & strcmp( #pin_obj , "((&pin_G11_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_RMII_TX_EN(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B11_obj)")  & strcmp( #pin_obj , "((&pin_B11_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_G11_obj)")  & strcmp( #pin_obj , "((&pin_G11_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C2_SMBA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_F2_obj)")  & strcmp( #pin_obj , "((&pin_F2_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_H6_obj)")  & strcmp( #pin_obj , "((&pin_H6_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART3_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D10_obj)")  & strcmp( #pin_obj , "((&pin_D10_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_D5(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_TXD0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_G13_obj)")  & strcmp( #pin_obj , "((&pin_G13_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_RMII_TXD0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_G13_obj)")  & strcmp( #pin_obj , "((&pin_G13_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ID(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART3_CTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D11_obj)")  & strcmp( #pin_obj , "((&pin_D11_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_D6(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_TXD1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_G14_obj)")  & strcmp( #pin_obj , "((&pin_G14_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_RMII_TXD1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (11) : \
    ((strcmp( #pin_obj , "(&pin_G14_obj)")  & strcmp( #pin_obj , "((&pin_G14_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI2_MISO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C2_obj)")  & strcmp( #pin_obj , "((&pin_C2_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_I2_obj)")  & strcmp( #pin_obj , "((&pin_I2_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_EXTSD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C2_obj)")  & strcmp( #pin_obj , "((&pin_C2_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_I2_obj)")  & strcmp( #pin_obj , "((&pin_I2_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART3_RTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_D12_obj)")  & strcmp( #pin_obj , "((&pin_D12_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM12_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_H6_obj)")  & strcmp( #pin_obj , "((&pin_H6_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_DM(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_RTC_REFIN(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI2_MOSI(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C3_obj)")  & strcmp( #pin_obj , "((&pin_C3_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_I3_obj)")  & strcmp( #pin_obj , "((&pin_I3_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_SD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C3_obj)")  & strcmp( #pin_obj , "((&pin_C3_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_I3_obj)")  & strcmp( #pin_obj , "((&pin_I3_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM12_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_H9_obj)")  & strcmp( #pin_obj , "((&pin_H9_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_DP(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_STP(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C0_obj)")  & strcmp( #pin_obj , "((&pin_C0_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MDC(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C1_obj)")  & strcmp( #pin_obj , "((&pin_C1_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_DIR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C2_obj)")  & strcmp( #pin_obj , "((&pin_C2_obj))")) == 0) ? (10) : \
    ((strcmp( #pin_obj , "(&pin_I11_obj)")  & strcmp( #pin_obj , "((&pin_I11_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_TXD2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C2_obj)")  & strcmp( #pin_obj , "((&pin_C2_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_OTG_HS_ULPI_NXT(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C3_obj)")  & strcmp( #pin_obj , "((&pin_C3_obj))")) == 0) ? (10) : \
    ((strcmp( #pin_obj , "(&pin_H4_obj)")  & strcmp( #pin_obj , "((&pin_H4_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_TX_CLK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C3_obj)")  & strcmp( #pin_obj , "((&pin_C3_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_RXD0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C4_obj)")  & strcmp( #pin_obj , "((&pin_C4_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_RMII_RXD0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C4_obj)")  & strcmp( #pin_obj , "((&pin_C4_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_MII_RXD1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C5_obj)")  & strcmp( #pin_obj , "((&pin_C5_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_ETH_RMII_RXD1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C5_obj)")  & strcmp( #pin_obj , "((&pin_C5_obj))")) == 0) ? (11) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_I5_obj)")  & strcmp( #pin_obj , "((&pin_I5_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_MCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART6_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_G14_obj)")  & strcmp( #pin_obj , "((&pin_G14_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D6(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_I6_obj)")  & strcmp( #pin_obj , "((&pin_I6_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_MCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART6_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_G9_obj)")  & strcmp( #pin_obj , "((&pin_G9_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D7(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_I7_obj)")  & strcmp( #pin_obj , "((&pin_I7_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART6_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_G7_obj)")  & strcmp( #pin_obj , "((&pin_G7_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_E0_obj)")  & strcmp( #pin_obj , "((&pin_E0_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_H11_obj)")  & strcmp( #pin_obj , "((&pin_H11_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_MCO2_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM8_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (3) : \
    ((strcmp( #pin_obj , "(&pin_I2_obj)")  & strcmp( #pin_obj , "((&pin_I2_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C3_SDA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_H8_obj)")  & strcmp( #pin_obj , "((&pin_H8_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S_CKIN(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_E1_obj)")  & strcmp( #pin_obj , "((&pin_E1_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_H12_obj)")  & strcmp( #pin_obj , "((&pin_H12_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D8(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_I1_obj)")  & strcmp( #pin_obj , "((&pin_I1_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_E4_obj)")  & strcmp( #pin_obj , "((&pin_E4_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_H14_obj)")  & strcmp( #pin_obj , "((&pin_H14_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_UART5_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D9(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_I2_obj)")  & strcmp( #pin_obj , "((&pin_I2_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D0_obj)")  & strcmp( #pin_obj , "((&pin_D0_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D1_obj)")  & strcmp( #pin_obj , "((&pin_D1_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_ETR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D2_obj)")  & strcmp( #pin_obj , "((&pin_D2_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_UART5_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D2_obj)")  & strcmp( #pin_obj , "((&pin_D2_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_CMD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D2_obj)")  & strcmp( #pin_obj , "((&pin_D2_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D11(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D2_obj)")  & strcmp( #pin_obj , "((&pin_D2_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_H15_obj)")  & strcmp( #pin_obj , "((&pin_H15_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_CLK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D3_obj)")  & strcmp( #pin_obj , "((&pin_D3_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NOE(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D4_obj)")  & strcmp( #pin_obj , "((&pin_D4_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NWE(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D5_obj)")  & strcmp( #pin_obj , "((&pin_D5_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NWAIT(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D6_obj)")  & strcmp( #pin_obj , "((&pin_D6_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NE1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D7_obj)")  & strcmp( #pin_obj , "((&pin_D7_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NCE2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D7_obj)")  & strcmp( #pin_obj , "((&pin_D7_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D13(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D8_obj)")  & strcmp( #pin_obj , "((&pin_D8_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D14(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D9_obj)")  & strcmp( #pin_obj , "((&pin_D9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D15(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D10_obj)")  & strcmp( #pin_obj , "((&pin_D10_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A16(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D11_obj)")  & strcmp( #pin_obj , "((&pin_D11_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A17(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D12_obj)")  & strcmp( #pin_obj , "((&pin_D12_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A18(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D13_obj)")  & strcmp( #pin_obj , "((&pin_D13_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D14_obj)")  & strcmp( #pin_obj , "((&pin_D14_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D15_obj)")  & strcmp( #pin_obj , "((&pin_D15_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_ETR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E0_obj)")  & strcmp( #pin_obj , "((&pin_E0_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NBL0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E0_obj)")  & strcmp( #pin_obj , "((&pin_E0_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NBL1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E1_obj)")  & strcmp( #pin_obj , "((&pin_E1_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TRACECLK_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E2_obj)")  & strcmp( #pin_obj , "((&pin_E2_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A23(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E2_obj)")  & strcmp( #pin_obj , "((&pin_E2_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TRACED_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E3_obj)")  & strcmp( #pin_obj , "((&pin_E3_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A19(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E3_obj)")  & strcmp( #pin_obj , "((&pin_E3_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TRACED1_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E4_obj)")  & strcmp( #pin_obj , "((&pin_E4_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A20(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E4_obj)")  & strcmp( #pin_obj , "((&pin_E4_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TRACED2_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E5_obj)")  & strcmp( #pin_obj , "((&pin_E5_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A21(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E5_obj)")  & strcmp( #pin_obj , "((&pin_E5_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TRACED3_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E6_obj)")  & strcmp( #pin_obj , "((&pin_E6_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A22(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E6_obj)")  & strcmp( #pin_obj , "((&pin_E6_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E7_obj)")  & strcmp( #pin_obj , "((&pin_E7_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D5(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E8_obj)")  & strcmp( #pin_obj , "((&pin_E8_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D6(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E9_obj)")  & strcmp( #pin_obj , "((&pin_E9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D7(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E10_obj)")  & strcmp( #pin_obj , "((&pin_E10_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D8(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E11_obj)")  & strcmp( #pin_obj , "((&pin_E11_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D9(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E12_obj)")  & strcmp( #pin_obj , "((&pin_E12_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D10(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E13_obj)")  & strcmp( #pin_obj , "((&pin_E13_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D11(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E14_obj)")  & strcmp( #pin_obj , "((&pin_E14_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_D12(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_E15_obj)")  & strcmp( #pin_obj , "((&pin_E15_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F0_obj)")  & strcmp( #pin_obj , "((&pin_F0_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F1_obj)")  & strcmp( #pin_obj , "((&pin_F1_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F2_obj)")  & strcmp( #pin_obj , "((&pin_F2_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F3_obj)")  & strcmp( #pin_obj , "((&pin_F3_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F4_obj)")  & strcmp( #pin_obj , "((&pin_F4_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A5(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F5_obj)")  & strcmp( #pin_obj , "((&pin_F5_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NIORD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F6_obj)")  & strcmp( #pin_obj , "((&pin_F6_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NREG(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F7_obj)")  & strcmp( #pin_obj , "((&pin_F7_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NIOWR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F8_obj)")  & strcmp( #pin_obj , "((&pin_F8_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_CD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F9_obj)")  & strcmp( #pin_obj , "((&pin_F9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_INTR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F10_obj)")  & strcmp( #pin_obj , "((&pin_F10_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D12(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F11_obj)")  & strcmp( #pin_obj , "((&pin_F11_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A6(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F12_obj)")  & strcmp( #pin_obj , "((&pin_F12_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A7(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F13_obj)")  & strcmp( #pin_obj , "((&pin_F13_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A8(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F14_obj)")  & strcmp( #pin_obj , "((&pin_F14_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A9(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_F15_obj)")  & strcmp( #pin_obj , "((&pin_F15_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A10(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G0_obj)")  & strcmp( #pin_obj , "((&pin_G0_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A11(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G1_obj)")  & strcmp( #pin_obj , "((&pin_G1_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A12(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G2_obj)")  & strcmp( #pin_obj , "((&pin_G2_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A13(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G3_obj)")  & strcmp( #pin_obj , "((&pin_G3_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A14(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G4_obj)")  & strcmp( #pin_obj , "((&pin_G4_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A15(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G5_obj)")  & strcmp( #pin_obj , "((&pin_G5_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_INT2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G6_obj)")  & strcmp( #pin_obj , "((&pin_G6_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_INT3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G7_obj)")  & strcmp( #pin_obj , "((&pin_G7_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART6_RTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G12_obj)")  & strcmp( #pin_obj , "((&pin_G12_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_G8_obj)")  & strcmp( #pin_obj , "((&pin_G8_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NE2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G9_obj)")  & strcmp( #pin_obj , "((&pin_G9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NCE3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G9_obj)")  & strcmp( #pin_obj , "((&pin_G9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NCE4_1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G10_obj)")  & strcmp( #pin_obj , "((&pin_G10_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NE3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G10_obj)")  & strcmp( #pin_obj , "((&pin_G10_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NCE4_2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G11_obj)")  & strcmp( #pin_obj , "((&pin_G11_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_NE4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G12_obj)")  & strcmp( #pin_obj , "((&pin_G12_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART6_CTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G13_obj)")  & strcmp( #pin_obj , "((&pin_G13_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_G15_obj)")  & strcmp( #pin_obj , "((&pin_G15_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A24(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G13_obj)")  & strcmp( #pin_obj , "((&pin_G13_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_FSMC_A25(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G14_obj)")  & strcmp( #pin_obj , "((&pin_G14_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_DCMI_D13(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_G15_obj)")  & strcmp( #pin_obj , "((&pin_G15_obj))")) == 0) ? (13) : \
    ((strcmp( #pin_obj , "(&pin_I0_obj)")  & strcmp( #pin_obj , "((&pin_I0_obj))")) == 0) ? (13) : \
    (0xffffffffffffffffULL))

