#include <stdio.h>


int diaSemana (int ano, int mes, int dia) {
    int A = ((12-mes) / 10);
    int B = ano - A;
    int C = mes + (12 * A);
    int D = (B / 100);
    int E = (D/4);
    int F = 2 - D + E;
    int G = (365.25 * B);
    int H = (30.6001 * (C + 1));
    int I = ((F+G) + (H + dia) + 5);

    return I % 7;
}

void main (void) {
    int ano, mes, dia, dsemana;
    printf("Digite o ano que deseja:   ");
    scanf("%d", &ano);
    printf("Digite o mes que deseja:   ");
    scanf("%d", &mes);
    printf("Digite o dia que deseja:   ");
    scanf("%d", &dia);

    dsemana = diaSemana(ano, mes, dia);
    switch (dsemana)
    {
    case 0:
        printf("E um Sabado!");
        break;
    
    case 1:
        printf("E um Domingo!");
        break;
    
    case 2:
        printf("E uma Segunda!");
        break;
    
    case 3: 
        printf("E uma Terca!");
        break;

    case 4: 
        printf("E uma Quarta!");
        break;

    case 5: 
        printf("E uma Quinta!");
        break;

    case 6: 
    printf("E uma Sexta!");
    
    default:
        break;
    }

}   