#include <stdio.h>
#include <stdlib.h>

int main () {
    char nome[100];
    int idade, opcao;
    float dinheiro;

    printf("Boa noite! Qual eh o seu nome? \n");
    scanf("%s", nome);

    printf("Excelente! %s, qual eh a sua idade? \n", nome);
    scanf("%d", &idade);

    printf("Otimo! %s, quanto voce vai depositar? \n", nome);
    scanf("%f", &dinheiro);
    system("cls");

    // while (opcao != 0) {
    //     printf("\nO que voce deseja fazer?\n");
    //     printf("(1) Ver seu nome\n");
    //     printf("(2) Ver sua idade\n");
    //     printf("(3) Ver seu deposito\n");
    //     printf("(0) Encerrar\n");
    //     scanf("%d", &opcao);

    //     system("cls");
    //     if (opcao == 1) {
    //         printf("Nome: %s\n", nome);
    //     } else if (opcao == 2) {
    //         printf("Idade: %d\n", idade);
    //     } else if (opcao == 3) {
    //         printf("Dinheiro depositado: %.2f\n", dinheiro);
    //     } else if (opcao != 0 ){
    //         printf("Opcao invalida.\n");
    //     } else {
    //         printf("Ate breve.\n");
    //     }
    // }

    do {
        printf("\nO que voce deseja fazer?\n");
        printf("(1) Ver seu nome\n");
        printf("(2) Ver sua idade\n");
        printf("(3) Ver seu deposito\n");
        printf("(0) Encerrar\n");
        scanf("%d", &opcao);

        system("cls");
        if (opcao == 1) {
            printf("Nome: %s\n", nome);
        } else if (opcao == 2) {
            printf("Idade: %d\n", idade);
        } else if (opcao == 3) {
            printf("Dinheiro depositado: %.2f\n", dinheiro);
        } else if (opcao != 0 ){
            printf("Opcao invalida.\n");
        } else {
            printf("Ate breve.\n");
        }
    } while (opcao != 0);

    // printf("Aqui estao as suas informacoes:\n");
    // printf("Nome: %s\n", nome);
    // printf("Idade: %d\n", idade);
    // printf("Dinheiro depositado: %.2f\n", dinheiro);

    return 1;
}