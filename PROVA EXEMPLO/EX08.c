#include <stdio.h>

int main () {
    int num, res, num1, num2;
    printf("Digite um numero para saber se ele é Feliz ou não: " );
    scanf("%d", &num);
    for (int i = 0; res != 1 && i > 3; i++) {
        num1 = num / 10;
        num2 = num % 10;
        res = (num1 * num1) + (num2 * num2);
        if (res != 1) {
            num = res;
        } else {
            res = res;
        }
    }
    if (res == 1) {
        printf("O numero é feliz!");
    } else { 
        printf("O numero nao é feliz!");
    }


}