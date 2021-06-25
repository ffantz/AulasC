#include <stdio.h>

int main () {
    int numero1, numero2, resultado;

    printf("Digite o numero 1: \n");
    scanf("%d", &numero1);
    printf("Digite o numero 2: \n");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;
    printf("O resultado da soma eh %d", resultado);

    return 1;
}