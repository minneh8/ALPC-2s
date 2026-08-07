#include <stdio.h>

int main () {
    float peso, altura, imc;
    char *tipo;
    printf("------------------------------------------------\n");
    printf("Bem-vindo ao calculador de IMC!\n");
    printf("------------------------------------------------\n");
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if (imc < 18.5) { 
        tipo = "Abaixo do peso";
    } else if (imc >= 18.5 && imc < 25) {
        tipo = "Peso normal";
    } else if (imc >= 25 && imc < 30) {
        tipo = "Sobrepeso";
    } else if (imc >= 30 && imc < 35) {
        tipo = "Obesidade grau I";
    } else if (imc >= 35 && imc < 40) {
        tipo = "Obesidade grau II";
    } else {
        tipo = "Obesidade grau III";
    }
    printf("Seu IMC eh %.2f e voce esta classificado como: %s\n", imc, tipo);
}