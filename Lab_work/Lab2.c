#include <xc.h>

void main(void) {
    TRISA7 = 1;
    TRISC5 = 0;
    TRISD6 = 0;
    while (1) {
        if (RA7 == 0){  
            LATC5 = 1;
            LATD6 = 1;
        }
        else {
            LATC5 = 0;
            LATD6 = 0;
        }
    }
    return;
}