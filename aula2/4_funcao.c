#include <stdio.h>

void imprimirInstrucao() {
    printf("Informe um numero, 0 para encerrar: ");
    return;
}

int lerEntrada() {
    int opcao;
    scanf("%d", &opcao);
    return opcao;
}

int soma(int numero, int somatorio) {
    numero += somatorio;
    return numero;
}

void imprimeResultado(int fator, int resultado) {
    printf("A soma desse numero com %d eh: %d\n", fator, resultado);
    return;
}

int main () {
    int opcao, numero;
    int fator = 3;

    do {
        imprimirInstrucao();
        opcao = lerEntrada();

        if (opcao != 0) {
            numero = soma(opcao, fator);
            imprimeResultado(fator, numero);
        }

    } while (opcao != 0);

    return 1;
}