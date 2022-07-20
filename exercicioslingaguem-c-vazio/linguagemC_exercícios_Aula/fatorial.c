#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fatorial, resposta = 1;
    printf("Escreve um numero: \n",fatorial);
    scanf("%i",&fatorial);

    for( ;fatorial >=1; -- fatorial)
    {
        resposta *= fatorial;

    }
        printf ("o numero fatorial e: %i\n ",resposta);

    return 0;
}