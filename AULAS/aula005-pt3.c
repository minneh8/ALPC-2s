#include <stdio.h>
#include <string.h>
#include <ctype.h>


int nvogais (char *v) {
    int pos = 0;
    int vogais = 0;
    while (v[pos] != '\0') {
        if (v[pos] == 'A' || v[pos] == 'E' || v[pos] == 'I' || v[pos] == 'O' || v[pos] == 'U' || v[pos] == 'a' || v[pos] == 'e' || v[pos] == 'i' || v[pos] == 'o' || v[pos] == 'u') {
            vogais++;
        }

        pos++;

    }
    return vogais;
}



int main () {
    char palavra[100];
    int nvogal;
    printf("Digite uma palavra:  ");
    scanf("%s", &palavra);
    nvogal = nvogais(palavra);
    printf("A PALAVRA: %s TEM %d VOGAIS.", palavra, nvogal);

}