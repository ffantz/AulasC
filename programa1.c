#include <stdio.h>
#include <conio.h>

int main () {
    char nome[100];
    int idade, opcao;
    float dinheiro;

    printf("Bom noite! Qual eh o seu nome? \n");
    scanf("%s", nome);

    printf("Excelente! %s, qual eh a sua idade? \n", nome);
    scanf("%d", &idade);

    printf("Otimo! %s, quanto voce vai depositar? \n", nome);
    scanf("%f", &dinheiro);

    printf("O que voce deseja fazer?\n");
    printf("(1) Ver seu nome\n");
    printf("(2) Ver sua idade\n");
    printf("(3) Ver seu deposito\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Nome: %s\n", nome);
    } else if (opcao == 2) {
        printf("Idade: %d\n", idade);
    } else if (opcao == 3) {
        printf("Dinheiro depositado: %.2f\n", dinheiro);
    } else {
        printf("Opcao invalida.");
    }

    // printf("Aqui estao as suas informacoes:\n");
    // printf("Nome: %s\n", nome);
    // printf("Idade: %d\n", idade);
    // printf("Dinheiro depositado: %.2f\n", dinheiro);

    return 1;
}