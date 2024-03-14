#include <stdio.h>

typedef union{
    float f_number;
    unsigned char f_array[4];

}union_t;


void main(){
    union_t number;
    number.f_number = 130;
    for (char i=3; i>=0; i--){
        printf("%x",number.f_array[i]);
    }
}
