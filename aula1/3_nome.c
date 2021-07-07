#include <stdio.h>

int main () {
    char nome[10];
    // char nomePreDefinido[] = "flavio";

    printf("Digite o seu nome: \n");
    scanf("%s", nome);

    printf("ola, %s", nome);

    return 1;
}