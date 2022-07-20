#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,resultado;
        printf("Digite o sua idade: \n ",idade);
        scanf("%d",&idade);

    int anoAtual;
        printf("Digite o ano atual: \n",anoAtual);
        scanf("%d",&anoAtual);

    resultado = anoAtual - idade;
    printf("Esse e o resultado: \n %d",resultado);
        


    return 0;
}