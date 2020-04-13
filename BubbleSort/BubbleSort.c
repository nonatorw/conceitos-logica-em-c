#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[5];
    int aux = 0;
    int alteracoes = 1;
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero para ser inserido no vetor: \n");
        scanf("%d", &vetor[i]);
    }

    printf("Vetor antes da ordenacao: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", vetor[i]);
    }

    aux = 0;

    while (alteracoes > 0)
    {
        alteracoes = 0;
        for (i = 0; i < 4; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                alteracoes++;
            }
        }
    }

    printf("Vetor depois da ordenacao: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
