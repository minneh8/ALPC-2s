#include <stdio.h>

int main () {
    float vc, nParcelas, taxa, vf;
    printf("Digite o Valor da Sua compra:");
    scanf("%f", &vc);
    printf("Digite em quantas vezes voce quer parcelar \n");
    printf("So pode parcelar em 1x (a vista), 2x, 4x, 8x, 10x, 12x e 20x:  ");
    scanf("%f", &nParcelas);
    if (nParcelas == 1 || nParcelas == 2 || nParcelas == 4 || nParcelas == 8 || nParcelas == 10 || nParcelas == 12 || nParcelas == 20) {
        if (nParcelas == 1) {
            taxa = 20 ;
            vf = vc - (vc * (taxa / 100)) ;
        } else if (nParcelas == 2 || nParcelas == 3) {
            taxa = 5 ;
            vf = vc + (vc * (taxa / 100));
        } else if (nParcelas >=4 && nParcelas <= 7) {
            taxa = 10;
            vf = vc + (vc * (taxa / 100));
        } else if (nParcelas ==8 || nParcelas == 9) {
            taxa = 15;
            vf = vc + (vc * (taxa / 100));
        } else if (nParcelas ==10 || nParcelas == 11) {
            taxa = 20;
            vf = vc + (vc * (taxa / 100));
        } else if (nParcelas >= 12 && nParcelas <= 19) {
            taxa = 25;
            vf = vc + (vc * (taxa / 100));
        } else if (nParcelas == 20) {
            taxa = 30;
            vf = vc + (vc * (taxa / 100));
        }
    } else {
        printf("Digite em quantas vezes voce quer parcelar \n");
        printf("So pode parcelar em 1x (A vista), 2x, 4x, 8x, 10x, 12x e 20x");
        scanf("%f", &nParcelas);
    }

    printf("O valor final da compra ficou em %.2f", vf);
}