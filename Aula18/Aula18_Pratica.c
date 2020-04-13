#include <stdio.h>
#include <stdlib.h>

/*=============================================================*
 * Ex1: Calcular conversao dolar -> real.
 *=============================================================*/
void conversaoDolarParaReal(void)
{
    double vlrDolar, txConversao = 3.85;
    printf("\nDigite o valor em Dolar: USD$ ");
    scanf("%lf.2", &vlrDolar);

    printf("Valor em Real: R$ %lf\n", vlrDolar * txConversao);
}

/*=============================================================*
 * Ex2: Calcular area e perimetro de um retangulo.
 *=============================================================*/
void calculaAreaPerimetroRetangulo(void)
{
    int a, b;
    printf("\nDigite a altura e comprimento do retangulo: ");
    scanf("%d %d", &a, &b);
    printf("Area do retangulo: %d - Perimetro: %d\n", (a * b), (2 * (a + b)));
}

/*=============================================================*
 * Ex3: Calcular imposto sobre area construida e nao-construida
 *=============================================================*/
void calcularImpostos(void)
{
    double areaTotal, areaConstruida;
    printf("\nDigite a area total do terreno: ");
    scanf("%lf", &areaTotal);

    printf("Digite a area construida......: ");
    scanf("%lf", &areaConstruida);

    double txConstruida = 5.0, txNaoConstruida = 3.8;
    double imposto1 = areaConstruida * txConstruida;
    double imposto2 = (areaTotal - areaConstruida) * txNaoConstruida;

    printf("Area Construida...............: R$ %.2lf\n", imposto1);
    printf("Area nao construida...........: R$ %.2lf\n", imposto2);
    printf("Imposto Total.................: R$ %.2lf\n", imposto1 + imposto2);
}

/*=============================================================*
 * Ex4: Gato mia
 *=============================================================*/
void gatoMia()
{
    int miado = 0, i = 0, parar = 0;

    do
    {
        printf("\n\nQual a intensidade (em quantidade de *i's*) do miado do gato? -> ");
        scanf("%d", &miado);

        printf("\n\nM");
        for (i = 0; i < miado; i++)
            printf("I");
        printf("AU\n\n\n");

        printf("Clique '0' para continuar ou '9' para finalizar: ");
        scanf("%d", &parar);
    } while (parar != 9);
}

/*=============================================================*
 * Ex5: Gato mia n vezes.
 *=============================================================*/
void gatoMiaNvezes()
{
    int miado = 0, i = 0;

    printf("\n\nQuantas vezes o gato deve miar? -> ");
    scanf("%d", &miado);

    for (i = 0; i < miado; i++)
        printf("\nMIAU! ");
    printf("\n");
}

int main(void)
{
    conversaoDolarParaReal();
    calculaAreaPerimetroRetangulo();
    calcularImpostos();
    gatoMia();
    gatoMiaNvezes();

    return 0;
}
