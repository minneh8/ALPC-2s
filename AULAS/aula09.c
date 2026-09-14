#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
    char numero[10][100];
    char buffer[100];
    size_t nLinhas = 0;
    //[1] Criar o ponteiro do arquivo
    FILE *arq;
    //[2] Abrir o arquivo para leitura 
    arq = fopen("IMAGEM001.txt", "rt");
    if (arq == NULL) {
        perror("IMAGEM001.txt");
        return 1;
    }

    //[3] Ler os dados linha por linha
    while (fgets(buffer, sizeof buffer, arq) != NULL && buffer[0] != '$') {
        buffer[strcspn(buffer, "\r\n")] = '\0';

        if (nLinhas >= 10) {
            fprintf(stderr, "A imagem possui mais de 10 linhas.\n");
            fclose(arq);
            return 1;
        }

        strcpy(numero[nLinhas], buffer);
        nLinhas++;
    }
    // [4] Fechar o arquivo
    fclose(arq);

    printf("\n\n");
    for (size_t i = 0; i < nLinhas; i++) {
        printf("%s\n", numero[i]);
    }

    printf("\n\n");
    for (size_t lin = 0; lin < nLinhas; lin++) {
        for (size_t col = 0; col < strlen(numero[lin]); col++) {
            if(numero[lin][col] == 'x') {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}