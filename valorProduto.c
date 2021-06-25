#include <stdio.h>

int main () {
    float valorProduto, valorProdutoDesconto;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valorProduto);

    valorProdutoDesconto = valorProduto - 2.5;
    printf("O valor do produto com desconto eh: %2.3lf", valorProdutoDesconto);

    return 1;
}