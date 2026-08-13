#include <stdio.h>

int main () {
    float  am, tm, ta, va, cont;
    int t;
    cont = 0;
    printf("Digite a sua Aplicacao inicial: ");
    scanf("%f", &ta);
    printf("Digite o seu Aporte Mensal: ");
    scanf("%f", &am);
    printf("Digite a taxa mensal: ");
    scanf("%f", &tm);
    printf("Digite a quantidade de Meses: \n");
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        printf("Mes [%.2d]: Saldo - [%15.2f].\n", i, ta);
        ta = (ta + (ta * (tm / 100)) + am);
    }
    printf("Mes [%.2d]: Saldo - [%15.2f].\n", t, ta);

    printf("Digite o valor que voce ira retirar na sua aposentadoria: ");
    scanf("%f", &va);
    while (ta > 0 && cont < 1200) {
        printf("Mes Aposentado [%.0f]: Saldo - [%15.2f].\n", cont, ta);
        ta = ta + ( ta * (tm / 100)) - va ;
        cont++ ;
    }
    float anos = cont / 12;
    printf("Voce viveu %.0f Meses ou %.1f anos com %.2f Mensal.", cont, anos, va);
}