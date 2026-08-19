#include <stdio.h>

int main () {
    float distanciaQuilometro, custoQuilometro, CBU, total, daplicado, desc;
    int bilhete, idade;

    desc = 0;
    custoQuilometro = 3.00;

    printf("O custo por KM esta em %.2fR$\n", custoQuilometro);
    printf("Digite quantos quilometros voce ira andar: ");
    scanf("%f", &distanciaQuilometro);
    CBU = custoQuilometro * distanciaQuilometro;

    printf("Digite a sua Idade:  ");
    scanf("%d", &idade);
    printf("Quantos bilhetes ira comprar?  ");
    scanf("%d", &bilhete);

    if (bilhete == 1) {
        desc = 0;
    } else if (bilhete >=2 && bilhete <=5) {
        desc = desc + 5;
    } else if (bilhete >=6 && bilhete <= 10) {
        desc = desc + 15;
    } else if (bilhete >= 11) {
        desc = desc + 30;
    }

    if (idade > 0 && idade <= 5) {
        desc = desc + 20;
    } else if (idade >=6 && idade <= 10) {
        desc = desc + 15;
    } else if (idade >= 11 && idade <= 16) {
        desc = desc + 10;
    } else if (idade >= 60) {
        desc = desc + 30;
    } else {
        desc = desc + 0;
    }
    
    total = CBU * bilhete;
    daplicado = total - total * ( desc / 100);

    printf("Voce comprou %d Bilhetes, e conseguiu um desconto de %.0f\n", bilhete, desc);
    printf("O custo final foi de %.2f", daplicado);


}