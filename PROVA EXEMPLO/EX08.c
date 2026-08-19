#include <stdio.h>

//Ler o numero inteiro / separar os digitos / para cada digito eleva ao quadrado / somar os quadrados / verificar se a soma deu 1 = numero feliz /volta e comeca dnv  
int main () {
    int numero, digito, soma, cont;

    printf("Digite um numero para descobrir se ele é feliz: ");
    scanf("%d", &numero);
    cont = 0;

    do { 
        printf("\n--------Numero em Analise: %d---------\n", numero);
          soma = 0;
        do  {
            digito = numero % 10;
            soma = soma + (digito * digito);
            numero = numero / 10;
        } while ( numero != 0);

        cont = cont + 1;
        printf("\n        Numero:  %d         Soma:  %d  ", numero, soma);
        numero = soma;
    } while ( (numero != 1) && (cont < 100) );
    
    if (numero == 1) {
        printf("\n ********O numero e feliz!********");
    } else {
        printf("\n O numero nao e feliz...");
    }
}   