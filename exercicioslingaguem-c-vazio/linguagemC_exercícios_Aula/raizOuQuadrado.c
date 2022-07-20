#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    float numero,raiz,quadrado;
    printf("Digite um numero: ", numero);
    scanf("%f",&numero);


    if (numero >= 0)
    {
        raiz = sqrt(numero);
        printf("A raiz do numero: \n %0.1f",raiz);
    }
    else
        {
            quadrado = numero * numero;
            printf("Numero ao Quadrado: %0.1f ",quadrado);
        }

    return 0;
}