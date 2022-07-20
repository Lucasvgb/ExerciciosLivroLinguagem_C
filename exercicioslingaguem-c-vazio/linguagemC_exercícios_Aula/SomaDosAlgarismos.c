#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a ´
soma de todos os seus algarismos. Por exemplo, ao numero 251 corresponder ´ a o valor ´
8 (2 + 5 + 1). Se o numero lido n ´ ao for maior do que zero, o programa terminar ˜ a com a ´
mensagem “Numero inv ´ alido”. 
    */
    int numeroDeAlgarismos;
    int i;
    int x=0;
    printf("Digite o numero de Algarismos: \n");
    scanf("%d",&numeroDeAlgarismos);

    if (numeroDeAlgarismos < 0)
    {
        printf("Numero Invalido \n");
    }
    else
    {
        for(i=0; i < numeroDeAlgarismos; i++)
        {
            x = x + i;
        }
            printf("Valores somados de zero a %d = %d \n",numeroDeAlgarismos,x);
    }

    return 0;
}