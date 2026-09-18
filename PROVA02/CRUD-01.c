#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno {
    int id;
    char nome[100];
    int idade;
    float nota;
};

struct aluno alunos[100];
int nAlunos = 0;

void cadastrar() {
    printf("------------CADASTRO-------------");
    printf("Seu ID eh %d", alunos[nAlunos].id);
    printf("Digite o seu nome: ");
    scanf("%s", &alunos[nAlunos].nome);
    printf("Digite a sua idade: ");
    scanf("%d", &alunos[nAlunos].idade);
    printf("Digite a sua nota: ");
    scanf("%f", &alunos[nAlunos].nota);
    nAlunos++;

}

void listar() {
    printf("------------Alunos Cadastrados---------------");
    for (int i = 0; i < nAlunos; i++){
        printf("ID:       %d", alunos[i].id);
        printf("NOME:     %s", alunos[i].nome);
        printf("IDADE:    %d", alunos[i].idade);
        printf("NOTA:     %f", alunos[i].nota);
    }
}

void atualizar() {
    int idAltera;
    printf("Digite o ID do aluno que deseja alterar: ");
    scanf("%d", &idAltera);
    if (idAltera < 0 || idAltera >= nAlunos) {
        printf("ID invalido!");
        return;
    }

     printf("Alterando dados do aluno com ID %d:\n", idAltera);
    printf("Digite o novo nome: ");
    scanf("%s", &alunos[idAltera].nome);
    printf("Digite a nova idade: ");
    scanf("%d", &alunos[idAltera].idade);
    printf("Digite a nova nota : ");
    scanf("%f", &alunos[idAltera].nota);

    printf("Dados alterados com sucesso!\n");
}

void remover() {

}

void salvar() {

}