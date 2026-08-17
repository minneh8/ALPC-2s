#include <stdio.h>
// SWITCH CASE NA PRATICA.
//Ulitlizado para substituir o if/else em alguns casos
int main () {
    int parcelas; 
    float descontos;

    parcelas = 8;
    switch (parcelas) { 
        case 2: 
            descontos = 20;
            break;
        case 4: 
            descontos = 15;
            break;
        case 8: 
            descontos: 10;
            break;
        case 10:
            descontos: 5;
            break;
    }
}