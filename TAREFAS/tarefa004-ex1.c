#include <stdio.h>

int main() {

    float nParcelas, taxa, vf;
    float vc;

    printf("Digite o Valor da sua compra: ");
    scanf("%f", &vc);

    printf("Digite quantas vezes voce quer parcelar: ");
    scanf("%d", &nParcelas);

    while (nParcelas != 1 && nParcelas != 2 && nParcelas != 3 &&
           nParcelas != 4 && nParcelas != 8 && nParcelas != 10 &&
           nParcelas != 12 && nParcelas != 20) {

        printf("Nao aceitamos essa quantidade de parcelas.\n");
        printf("Digite uma quantidade valida: ");
        scanf("%d", &nParcelas);
    }

    if (nParcelas == 1) {
        taxa = 20;
        vf = vc - (vc * (taxa / 100));
    }
    else if (nParcelas == 2 || nParcelas == 3) {
        taxa = 5;
        vf = vc + (vc * (taxa / 100));
    }
    else if (nParcelas == 4 || nParcelas == 8) {
        taxa = 10;
        vf = vc + (vc * (taxa / 100));
    }
    else if (nParcelas == 10 || nParcelas == 12) {
        taxa = 20;
        vf = vc + (vc * (taxa / 100));
    }
    else if (nParcelas == 20) {
        taxa = 30;
        vf = vc + (vc * (taxa / 100));
    }

    printf("O valor final da compra ficou em %.2f\n", vf);

    return 0;
}
