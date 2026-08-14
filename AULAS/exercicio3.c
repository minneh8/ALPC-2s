//Desenvolver uma aplicativo para ensinar tabuada para uma crianca.
//Sorteio de dois numeros = v1 e v2 entre 1 e 9
//mensagens: Voce Acertou __ contas , Voce Errou __ contas, em __ tentativas 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char v1f[10] = "";
    char v2f[10] = "";
    int ans, cont, acerto, erro, l;
    srand(time(NULL));
    acerto = 0;
    erro = 0;
    l = 0;
    cont = 1;

    while (cont == 1) {
        int v1 = rand() % 9 + 1;
        int v2 = rand() % 9 + 1;

        int res = v1 * v2;
        for (int i = 0; i < v1; i++) {
            v1f[i] = '#';
        }
        v1f[v1] = '\0';

        for (int n = 0; n < v2; n++) {
            v2f[n] = '&';
        }
        v2f[v2] = '\0';

        printf("\n Faca a Conta de Multiplicacao abaixo! \n");
        printf("%s x %s: \n", v1f, v2f);
        scanf("%d", &ans);

        if (ans != res) {
            while (ans != res) {
                printf("Resposta errada! Tente novamente\n");
                printf("Digite sua nova resposta: ");
                scanf("%d", &ans);
                erro = erro + 1;
                l = l + 1;
                printf("Deseja fazer outra conta? se sim digite 1, se nao digite 0: ");
                scanf("%d", &cont);
            }
        } else {
            printf("Parabens! Voce acertou!\n");
            printf("Deseja fazer outra conta? se sim digite 1, se nao digite 0: ");
            scanf("%d", &cont);
            acerto = acerto + 1;
        }

        l = l + 1;

    }
    printf("Parabens, voce concluiu os exercicios! Voce acertou %d contas, voce errou %d contas em %d tentativas!", acerto, erro, l);


    return 0;
}