#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;

    printf("Digite o tamanho dos lados A, B, C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != b && a != c && b != c)
        printf("Triangulo escaleno!");
    else if (a == b && b == c)
        printf("Triangilo equilatero!");
    else
        printf("Triangulo isosceles!");

    return 0;
}
