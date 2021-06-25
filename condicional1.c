#include <stdio.h>

int main () {
    int valor1 = 25;
    int valor2 = 30;

    // true || true -> true
    // false || false -> false
    // true || false -> true
    // false || true -> true
    if (valor1 < 20 || valor2 > 40) {
        printf("condicao verdadeira");
    } else {
        printf("condicao falsa");
    }

    // true && true -> true
    // false && false -> false
    // true && false -> false
    // false && true -> false
    /* if (valor1 < 20 && valor2 > 40) {
        printf("condicao verdadeira");
    } else {
        printf("condicao falsa");
    } */

    return 1;
}