#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_1,numero_2;

    printf("Digite o primeiro numero: \n",numero_1);
    scanf("%d",&numero_1);

    printf("Digite o segundo numero: \n",numero_2);
    scanf("%d",&numero_2);

    if (numero_1 > numero_2)
    {
        printf("Primeiro numero e maior: \n %d",numero_1);
    }
    else
        {
        printf("Segundo numero e maior: \n %d",numero_2);    
        }


    
    return 0;
}