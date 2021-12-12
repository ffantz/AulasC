#include <stdio.h>
#include <stdlib.h>

void mostraLista(int *p, int quant_pessoas)
{
    int temporaria, primeiro;
    for (int posicaoIdade = 0; posicaoIdade < quant_pessoas; posicaoIdade++)
    {
        if(p[posicaoIdade] >= 60) {
            primeiro = p[posicaoIdade];
            printf("\nMovendo [%d] = %d\n", posicaoIdade , p[posicaoIdade]);
            for (int inicio = posicaoIdade; inicio > 0; inicio--) {
                if (p[inicio - 1] < primeiro) {
                    temporaria = p[inicio];
                    p[inicio] = p[inicio - 1];
                    p[inicio - 1] = temporaria;
                    printf("trocando %d e %d \n ", p[inicio] , p[inicio + 1]);
                }
            }
        }
    }

    printf("\nLista final:\n");
    for (int i = 0; i < quant_pessoas; i++)
    {
        printf("Lista [%d] = %d\n", i , p[i]);
    }
}

int main (void)
{
    int *p;
    int i, quant_pessoas;
    printf("Digite a quantidade de pessoas na fila \n");
    scanf("%d", &quant_pessoas);
    p = (int *)(malloc(quant_pessoas * sizeof(int)));

    if (p == NULL)
    {
        printf("\nErro de Alocação de memoria");
        system("pause");
        exit(1);
    }

    printf("\n");
    for(i = 0; i < quant_pessoas; i++)
    {
        printf("Digite sua idade [%d] : ", i);
        scanf("%d", &p[i]);
        if (p[i] >= 60){
            // printf ("\n<Voce se encaixa na fila de prioridade>");
        }else{
            // printf ("\n<Voce nao se encaixa na fila de prioridade>");
        }
    }

    printf("\n--------------------------------------------------");
    mostraLista(p, quant_pessoas);
    printf ("\n");
    system("pause");
    return 0;
}