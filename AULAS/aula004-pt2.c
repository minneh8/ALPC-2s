#include <stdio.h>
//Definir todas as funcoes
//Desenvolver as seguintes funcoes:
//contar os digitos de um numero inteiro.
//somar os digitos de um numero inteiro.
//calcular o produto dos digitos de um numero inteiro 

int contar(int num) {
    int cont = 0;

    if (num == 0) {
        return 1;
    }
    while (num != 0) {
        num = num / 10;
        cont++;
    }
    return cont;
}


int somar(int num) {
    int soma = 0;

    while (num != 0) {
        soma = soma + ( num % 10 );
        num = num / 10;
    }
    return soma;
}


int produto(int num) {
    int prod = 1;

    while (num != 0) {
        prod = prod * (num % 10);
        num = num / 10;
    }
    return prod;
}

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int resultado = contar(numero);
    printf("CONTAR: %ld\n", resultado);
    resultado = somar(numero);
    printf("SOMAR: %d\n", resultado);
    resultado = produto(numero);
    printf("PRODUTO: %d\n", resultado);
    return 0;
}