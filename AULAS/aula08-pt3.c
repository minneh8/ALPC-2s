#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct DADOS {
    char nome[100];
    float cr, cod, semestre, ndc, nddp;
};

int main() {

    int n;
    struct DADOS dado[1000];

    printf("Digite o numero de alunos para cadastro: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", dado[i].nome);
        printf("Digite o CR do aluno %d: ", i + 1);
        scanf("%f", &dado[i].cr);
        printf("Digite o codigo do aluno %d: ", i + 1);
        scanf("%f", &dado[i].cod);
        printf("Digite o semestre do aluno %d: ", i + 1);
        scanf("%f", &dado[i].semestre);
        printf("Digite o Numero de disciplinas cursadas do aluno %d: ", i + 1);
        scanf("%f", &dado[i].ndc);
        printf("Digite o Numero de disciplinas de DP do aluno %d: ", i + 1);
        scanf("%f", &dado[i].nddp);
    }

    FILE *arquivo;
    arquivo = fopen("alunos.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    for (int i = 0; i < n; i++) {

        fprintf(arquivo, "\n--- ALUNO %d ---\n", i + 1);
        fprintf(arquivo, "Nome: %s\n", dado[i].nome);
        fprintf(arquivo, "CR: %.2f\n", dado[i].cr);
        fprintf(arquivo, "Codigo: %.2f\n", dado[i].cod);
        fprintf(arquivo, "Semestre: %.2f\n", dado[i].semestre);
        fprintf(arquivo, "Numero de disciplinas cursadas: %.2f\n", dado[i].ndc);
        fprintf(arquivo, "Numero de disciplinas de DP: %.2f\n", dado[i].nddp);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso no arquivo alunos.txt!\n");

    
    char linha[200];

    arquivo = fopen("alunos.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("--- DADOS DOS ALUNOS ---\n\n");

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;


    return 0;
}