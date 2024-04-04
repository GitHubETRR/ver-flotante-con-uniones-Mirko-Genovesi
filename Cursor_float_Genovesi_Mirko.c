#include <stdio.h>


void main(){
    float f_number = 2;
    char *cursor = &f_number;
    cursor += 0x03;

    for (char i=1; i<=4; i++){
        printf("%u° byte:%x\n", i, *cursor);
        *(cursor--);
    }
}
