#include <stdio.h>
#include <string.h>
//***************************************
//  DESENVOLVER UMA FUNCAO PARA CONTAR 
//  O NUMERO DE CARACTERES DE UMA PALAVRA
//***************************************

int numeroCaracteres (char *c) {

    int pos = 0;
    while (c[pos] != '\0') {
        pos++;
    }

    return pos;
}


int main () {
    char palavra[100];
    printf("Digite uma Palavra: ");
    scanf("%s", &palavra);
    int ncaracteres;
    ncaracteres = numeroCaracteres(palavra);

    printf("\nA PALAVRA: %s TEM %d CARACTERES",palavra, ncaracteres );
}