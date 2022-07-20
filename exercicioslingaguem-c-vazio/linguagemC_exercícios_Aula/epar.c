#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("digite um numero:",numero);
    scanf("%d",&numero);

    if (numero % 2 == 0)
    {
        printf("O numero e PAR \n ",numero);
    }
    else
        {
            printf("O numero e IMPAR \n",numero);
        }
        
    return 0;
}