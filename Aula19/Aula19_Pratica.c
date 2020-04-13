#include <stdio.h>
#include <stdlib.h>

/*===========================================================================================*
 * Ex.1: Escreva um programa em C que forneça o fatorial de um numero fornecido pelo usuario. 
 *       Para lembrar: por exemplo, o fatorial de 2 (2!) e igual 2 * 1, que e igual a 2.
 *       O fatorial de 4 (4!) e igual a 4 * 3 * 2 * 1, que e igual a 24.
 *===========================================================================================*/
void calculaFatorial()
{
    int n = 0, fat = 1, i = 0;
    printf("\nDigite o numero a ser calculado: ");
    scanf("%d", &n);

    printf("\n\nO fatorial de %d (%d!) e igual a:", n, n);
    for (i = n; i > 0; i--)
    {
        fat *= i;
        if (i != n)
            printf(" *");

        printf(" %d", i);
    }

    printf(", que e igual a %d", fat);
}

/*===========================================================================================*
 * Ex.2: Escreva um programa em C que, atraves da leitura de um numero fornecido pelo usuario,
 *       indique se este numero e primo. Lembrando: a condicao para um numero ser considerado
 *       primo e que este seja divisivel somente por ele mesmo e por 1.
 *       Um exemplo de numero primo e o numero 11.
 *===========================================================================================*/
void ehPrimo()
{
    int n = 0, i = 0, cont = 0;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cont++;
    }

    if (cont > 2)
        printf("\nNao eh primo!");
    else
        printf("\nEh primo!");
}

/*===========================================================================================*
 * Ex.3: Escreva um programa em C que, atraves da leitura de um numero fornecido pelo 
 *       usuario, gere a sequencia de Fibonacci com a quantidade de termos indicada pelo
 *       usuario. 
 *       A sequencia de Fibonacci, basicamente, consiste na geracao do numero seguinte 
 *       atraves da soma dos dois numeros anteriores... 
 *       Por exemplo: 1, 1, 2 (1 + 1), 3 (1 + 2), 5 (3 + 2), e assim por diante.
 *       Por exemplo, se o usuario fornecer o numero 4, devem ser indicados os 4 primeiros
 *       numeros da sequencia, que sao 1, 1, 2 e 3.
 *===========================================================================================*/
void geraFibonacci()
{
    int n = 0, i = 0;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    int ant = 0, atu = 1, aux = 0;
    for (i = 1; i <= n; i++)
    {
        aux = ant + atu;
        ant = atu;
        atu = aux;

        printf("%d ", ant);
    }
}

int main(void)
{
    calculaFatorial();
    ehPrimo();
    geraFibonacci();

    return 0;
}
