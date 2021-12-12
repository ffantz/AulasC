#include <stdio.h>
#include <math.h>

int primo(numero) {
    int raiz, i;
    if (numero < 2)
        return 0;

    if (numero == 2)
        return 1;

    if (numero % 2 == 0)
        return 0;

    raiz = sqrt(numero);
    for (i = 3; i <= raiz; i += 2) {
        if (numero % i == 0)
            return 0;
    }
}

int main() {
    int num, i, qtd;

    scanf("%d", &qtd);

    for(i= 1; i <= qtd; i++) {
        scanf("%d", &num);
        if (primo(num))
            printf("%d eh primo\n", num);
        else if( 0 == primo(num))
            printf("%d nao eh primo\n", num);
    }
    return 0;
}