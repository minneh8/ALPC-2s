#include <stdio.h>

int main(void) {

    int n;
    int idade;
    int i;

    int soma_idades = 0;
    float media_idade = 0.0f;

    int idade_mais_velho = -1;   /* menor valor possível para inicializar */
    int idade_mais_novo = -1;    /* será ajustado na 1ª leitura */

    int qtd_menor_18 = 0;
    int qtd_18_a_20 = 0;
    int qtd_20_a_25 = 0;
    int qtd_25_a_30 = 0;
    int qtd_30_ou_mais = 0;

    printf("Digite o numero de alunos da classe: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        printf("Digite a idade do aluno %d: ", i);
        scanf("%d", &idade);

        /* soma para calcular a media depois */
        soma_idades = soma_idades + idade;

        /* verifica o aluno mais velho e o mais novo */
        if (i == 1) {
            /* na primeira leitura, os dois recebem o primeiro valor */
            idade_mais_velho = idade;
            idade_mais_novo = idade;
        } else {
            if (idade > idade_mais_velho) {
                idade_mais_velho = idade;
            }
            if (idade < idade_mais_novo) {
                idade_mais_novo = idade;
            }
        }

        /* verifica a faixa etaria do aluno */
        if (idade < 18) {
            qtd_menor_18++;
        } else if (idade >= 18 && idade < 20) {
            qtd_18_a_20++;
        } else if (idade >= 20 && idade < 25) {
            qtd_20_a_25++;
        } else if (idade >= 25 && idade < 30) {
            qtd_25_a_30++;
        } else { /* idade >= 30 */
            qtd_30_ou_mais++;
        }
    }

    /* calcula a media somente se houver pelo menos 1 aluno */
    if (n > 0) {
        media_idade = (float) soma_idades / n;
    }

    printf("\n===== RESULTADOS =====\n");
    printf("Media de idade dos alunos: %.2f\n", media_idade);
    printf("Idade do aluno mais velho: %d\n", idade_mais_velho);
    printf("Idade do aluno mais novo: %d\n", idade_mais_novo);
    printf("Numero de alunos por faixa de idade:\n");
    printf("idade < 18 anos.............: %d\n", qtd_menor_18);
    printf("18 <= idade < 20 anos.......: %d\n", qtd_18_a_20);
    printf("20 <= idade < 25 anos.......: %d\n", qtd_20_a_25);
    printf("25 <= idade < 30 anos.......: %d\n", qtd_25_a_30);
    printf("idade >= 30 anos............: %d\n", qtd_30_ou_mais);

    return 0;
}