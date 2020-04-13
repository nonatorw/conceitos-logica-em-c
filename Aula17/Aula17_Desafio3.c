#include <stdio.h>
#include <stdlib.h>

void meuCodigo(void)
{
    int n, i;
    scanf("%d", &n);

    int array[n];
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int menor = 0, maior = 0, aux = 0;
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            menor = array[i];
            maior = array[i];
        }

        if (array[i] < menor)
        {
            menor = array[i];
        }

        if (array[i] > maior)
        {
            maior = array[i];
        }

        if (menor > maior)
        {
            aux = maior;
            maior = menor;
            menor = aux;
        }
    }
    printf("\n%d\n%d\n\n", maior, menor);
}

void codigoExemplo(void)
{
    int n, i;
    scanf("%d", &n);
    int array[n];

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int menor = array[0];
    int maior = array[0];

    for (i = 0; i < n; i++)
    {
        if (array[i] < menor)
        {
            menor = array[i];
        }

        if (array[i] > maior)
        {
            maior = array[i];
        }
    }

    printf("\n%d\n%d\n\n", maior, menor);
}

int main(void)
{
    meuCodigo();
    codigoExemplo();

    return 0;
}
