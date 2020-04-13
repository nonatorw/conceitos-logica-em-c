#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n], i = 0, total = 0;

    for (i = 0; i < n; i++)
    {
        //printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
        total += vetor[i];
    }

    printf("%d", total);

    return 0;
}
