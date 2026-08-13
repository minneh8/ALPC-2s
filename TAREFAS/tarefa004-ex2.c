#include <stdio.h>

int main () {
    int idade, media, novo, velho, um, dois, tres, quatro, cinco, n, somaidade; 
    printf("Digite quantos aluno voce quer coletar a informacao: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Quantos anos o aluno %d tem: ", i + 1);
        scanf("%d", &idade);
        somaidade = somaidade + idade;
    }
}