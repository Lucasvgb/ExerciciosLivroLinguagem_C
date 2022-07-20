#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero_1,numero_2;
    printf("Digite o PRIMEIRO numero: \n",numero_1);
    scanf("%f",&numero_1);
    printf("Digite o SEGUNDO numero: \n",numero_2);
    scanf("%f",&numero_2);

    if(numero_1 == numero_2)
    {
    printf("Numeros IGUAIS");
    }
    else
    {
        if(numero_1 > numero_2)
        {
            printf("O PRIMEIRO numero e maior \n",numero_1);
        }
        else
        {
            printf("O SEGUNDO numero e maior \n",numero_2);
        }
    }

    return 0;
}