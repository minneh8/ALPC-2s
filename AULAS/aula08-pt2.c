#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct DADOS {
    char nome [100];
    float cr, cod, semestre, ndc, nddp;
};

int main () {
    int n;
    struct DADOS dado[1000];
    printf("Digite o numero de alunos para cadastro: ");
    scanf("%d", &n);

    for( int i = 0; i < n; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", dado[i].nome);

        printf("Digite o CR do aluno %d: ", i + 1);
        scanf("%f", &dado[i].cr);

        printf("Digite o codigo do aluno %d: ", i + 1);
        scanf("%f", &dado[i].cod);

        printf("Digite o semestre do aluno %d: ", i + 1);
        scanf("%f", &dado[i].semestre);

        printf("Digite a Numero de disciplinas cursadas do aluno %d: ", i + 1);
        scanf("%f", &dado[i].ndc);

        printf("Digite a Numero de disciplinas de DP do aluno %d: ", i + 1);
        scanf("%f", &dado[i].nddp);
    }

    for (int i = 0; i < n; i++ ) {
        printf("\n--- ALUNO %d , DADOS INFORMADOS ---\n", i);

        printf("Nome: %s\n", dado[i].nome);
        printf("CR: %.2f\n", dado[i].cr);
        printf("Codigo: %.2f\n", dado[i].cod);
        printf("Semestre: %.2f\n", dado[i].semestre);
        printf("Numero de disciplinas cursadas: %.2f\n", dado[i].ndc);
        printf("Numero de disciplinas de DP: %.2f\n", dado[i].nddp);
    }
}