#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct DADOS {
    char nome [100];
    float cr, cod, semestre, ndc, nddp;
};

int main () {
    struct DADOS dado;

    printf("Digite o nome: ");
    scanf(" %[^\n]", dado.nome);

    printf("Digite o CR: ");
    scanf("%f", &dado.cr);

    printf("Digite o codigo: ");
    scanf("%f", &dado.cod);

    printf("Digite o semestre: ");
    scanf("%f", &dado.semestre);

    printf("Digite a Numero de disciplinas cursadas: ");
    scanf("%f", &dado.ndc);

    printf("Digite a Numero de disciplinas de DP: ");
    scanf("%f", &dado.nddp);


    printf("\n--- DADOS INFORMADOS ---\n");

    printf("Nome: %s\n", dado.nome);
    printf("CR: %.2f\n", dado.cr);
    printf("Codigo: %.2f\n", dado.cod);
    printf("Semestre: %.2f\n", dado.semestre);
    printf("Numero de disciplinas cursadas: %.2f\n", dado.ndc);
    printf("Numero de disciplinas de DP: %.2f\n", dado.nddp);
}