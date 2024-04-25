#include <stdio.h>
#define SIZE sizeof(var.valor)


union{
    float valor;
    unsigned char bytes[sizeof(float)]; 
}var;


void main() {
    var.valor = -15;
    for (int i=0; i<SIZE; i++){
        printf("Mostrando %d°byte: %x\n", i+1, var.bytes[i]);
    }
}
