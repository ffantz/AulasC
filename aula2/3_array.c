#include <stdio.h>
#include <math.h>

int main () {
    int lista[5];

    for (int contador = 0; contador < 5; contador++ ) {
        printf("Insira um numero: ");
        scanf("%d", &lista[contador]);
    }

    for (int contador = 0; contador < 5; contador++ ) {
        lista[contador] = pow(lista[contador], 2);
        printf("Numero ao quadrado: %d\n", lista[contador]);
    }

    return 1;
}