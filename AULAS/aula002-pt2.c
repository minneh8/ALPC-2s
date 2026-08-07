//Desenvolver uma Aplicacao de Software em Linguagem C, para calcular o valor de uma Funcão
// y(x) = (x - 5)*(x - 10)
// No intervlado de (0, 20)

#include <stdio.h>
//While -->
int main() {
    float y, i;
    int  x;
    printf("Digite o intervalo que voce queira ver a funcao: ");
    scanf("%f", &i);

    printf("\nFeito por While -->\n");
    x = 0;
    while (x <= i) { 
        y = ((x - 5)*(x - 10));
        printf("\nY(%d) = %.2f", x, y);
        x++;
    }

    printf("\nFeito por For -->");
    for (int x = 0; x <= i; x++) {
        y = ((x - 5)*(x - 10));
        printf("\nY(%d) = %.2f", x, y);
    }
}