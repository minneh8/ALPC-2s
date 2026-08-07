#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int aleatorio = rand() % 101; 
    int num, cont;
    cont = 0;
    num = -1;
    printf("Tente acertar o numero que o computador pensou: ");
    scanf("%d", &num);
    while (num != aleatorio) {
        if (num > aleatorio) {
            printf("O seu numero eh MAIOR\n");
        } else {
            printf("O seu numero eh MENOR\n");
        }
        printf("Tente novamente: ");
        scanf("%d", &num);
        cont++;
    }
    printf("PARABENS, VOCE ACERTOU EM %d TENTATIVAS\n", cont);
}