#include <xc.h>

void main(void) {
    TRISC = 0;
    TRISD = 0;
    TRISB1 = 1;
    TRISB4 = 1;
    ANCON0 = 0;
    ANCON1 = 0x03;
    ADCON1 = 0;
    ADCON2 = 0x11;
    ADCON0 = 0x21;
    while (1) {
        ADCON0 = 0x23;
        while (ADCON0bits.GO);
        LATD = ADRESH;
        ADCON0 = 0x27;
        while (ADCON0bits.GO);
        LATC = ADRESH;
    }
    return;
}