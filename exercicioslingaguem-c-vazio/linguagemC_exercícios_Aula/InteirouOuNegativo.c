#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
Ler um numero inteiro. Se o numero lido for negativo, escreva a mensagem “Numero 
invalido”. Se o numero for positivo, calcular o logaritmo deste numero. 
*/

int main()
{
    float numero,y;
        printf("Escreva um numero: \n",numero);
        scanf("%f",&numero);
    if (numero < 0)
    {
        printf("Numero Invalido",numero);
    }
    else
    {
        if(numero > 0)
        {
            printf("Numero Positivo. \n",numero);
            y = log2(numero);
            printf("Log de %.1f na Base 2 = %.1f",numero,y);
        }
    
    }


    return 0;
}