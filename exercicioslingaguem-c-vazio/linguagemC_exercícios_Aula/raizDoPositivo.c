#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    float numero1,raiz;   
    printf("Digite o numero: \n ",numero1);
    scanf("%f",&numero1);

    if(numero1 >= 0 )
    {
        raiz = sqrt(numero1);
        printf("A raiz quadrada do numero e: %0.1f ",raiz);
    }  
    else 
        {
            printf("Numero invalido",raiz);
        }
    

    return 0;
}