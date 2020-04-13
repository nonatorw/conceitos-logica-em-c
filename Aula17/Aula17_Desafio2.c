#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0, i = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            printf("%d\n", array[i]);
        }
    }

    return 0;
}
