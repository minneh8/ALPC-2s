#include <stdio.h>

int main () {
    int filhos, idade, anosEscolari, preco, desc;
    float res, troco, pago;

    printf("Digite a sua Idade: ");
    scanf("%d", &idade);
    printf("Digite o numero de filhos: ");
    scanf("%d", &filhos);
    printf("Digite quantos anos de Escolaridade: ");
    scanf("%d", &anosEscolari);

    preco = 60;
    desc = 0;

    if (idade < 16 ) {
        desc = desc + 10;
    } else if (idade > 60 ) { 
        desc = desc + 50;
    } else {
        desc = desc + 0;
    }

    for (int i = 0; i < filhos; i++) {
        desc = desc + 10;
    }

    for (int i = 0; i < anosEscolari; i++) {
        desc = desc + 1;
    }

    res = preco - ( preco * desc / 100);
    printf("O preco do ingresso cheio é %d Reais. \n", preco);
    printf("Com o Desconto de %d Ficou %.2f Reais \n", desc, res);
    printf("Voce ira pagar quanto?: ");
    scanf("%f", &pago);

    troco = pago - res;

    printf("O troco ficou em %2.f.", troco);

    
}