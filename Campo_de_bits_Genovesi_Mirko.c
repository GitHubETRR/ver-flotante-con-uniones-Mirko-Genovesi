#include <stdio.h>
#define SIZE sizeof(var.valor)


union{
    float valor;
    unsigned char bytes[sizeof(float)]; 
}var;
//No pude poner que tome el tipo de var.valor dentro del struct para que funcione con cualquier tipo de variable sin cambiarlo manualmente.


void main() {
    var.valor = -15;
    for (int i=0; i<SIZE; i++){
        printf("Mostrando %d°byte: %x\n", i+1, var.bytes[i]);
    }
}
