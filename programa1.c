#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// char letra[] = { 'A', '1', 'E', '5', 'T', '7', 'W', '8', 'G' };
// char letra[] = { '3','C','9','H','4','Q','6' };
char letra[50];

void letraOrdem(){
    int a, b;
    char aux;

    for(a = 0; a < (int) sizeof(letra); a++) {
        for(b = (a + 1); b < (int) sizeof(letra); b++) {
            if (isdigit(letra[a]) != 0 && isdigit(letra[b]) != 0) {
                if (letra[a] < letra[b]) {
                    aux = letra[a];
                    letra[a] = letra[b];
                    letra[b] = aux;
                }
            }

            if (isdigit(letra[a]) == 0 && isdigit(letra[b]) == 0) {
                if (letra[a] > letra[b]) {
                    aux = letra[a];
                    letra[a] = letra[b];
                    letra[b] = aux;
                }
            }

            if (isdigit(letra[a]) != 0 && isdigit(letra[b]) == 0) {
                aux = letra[a];
                letra[a] = letra[b];
                letra[b] = aux;
            }
        }
    }
}

void main () {
    printf("Digite a sentença: \n");
    gets(letra);
    letraOrdem();
    printf("Letras Ordenadas: \n");
    puts(letra);
    return;
}