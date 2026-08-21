#include <stdio.h>
//Exemplo simples

float media(float nota1, float nota2) {
    float auxmedia;
    auxmedia = (nota1 + nota2) / 2 ;
    return auxmedia;
}

void main (void) {
    float resultado;
    resultado = media(8, 10);
    printf("MEDIA: %.2f", resultado);
}
