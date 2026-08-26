#include <stdio.h>
#include <string.h>

int main () {
    char palavra[100] = "Peritonio" ;
    int pos;
    //pos = 4;
    //printf("\n%2d - %c", pos, palavra[pos]);
    pos = 0;
    while (palavra[pos] != '\0') {
        printf("\n%2d - %c", pos, palavra[pos]);
        pos++;
    }

    return 0;
}