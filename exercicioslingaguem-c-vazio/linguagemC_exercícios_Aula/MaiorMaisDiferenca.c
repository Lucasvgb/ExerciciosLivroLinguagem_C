#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_1,numero_2,diferenca;
    printf("Digite o primeiro numero: \n",numero_1);
    scanf("%d",&numero_1);

    printf("Digite o segundo numero: \n",numero_2);
    scanf("%d",&numero_2);

    diferenca = numero_1 - numero_2;
    if (numero_1 > numero_2) //NÃO COLOCAR ponto e virgula
        {
        printf("O PRIMEIRO e maior %d \n ",numero_1);  
        printf("A diferenca entre eles e: %d",numero_1 - numero_2);
        }
    else
        {
        printf("o SEGUNDO e maior \n %d",numero_2);
        printf("A diferenca entre eles e: \n %d",numero_2 - numero_1);
        
        }
    
    return 0;
}