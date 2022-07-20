#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
Escreva um programa para informar o valor de
uma corrida de taxi que considere o valor mínimo
da corrida. Ou seja, ao entrar no taxi, o cliente
deve pagar um valor mínimo de R$ 3,50, mesmo
que o tamanho da corrida seja inferior a esse valor.
O programa deve considerar as informações do
exercício anterior.
*/

int main()
{
    
    float km,valor,valor_corrida, min = 3.5;
    int bandeira;

    printf("Digite o numero da bandeira (1 ou 2): ",bandeira);
    scanf("%d",&bandeira);

    printf("Digite a distancia em KM: ");
    scanf("%f",&km);


    if(bandeira == 1)
    {
        valor = 1,8;
    }
    if(bandeira == 2)
    {
        valor = 2,3;
    }

    valor_corrida = valor * km;
    if(valor_corrida < min);
    {
        valor_corrida = min;
    }
    printf("o valor da corrida e: R$ %.2f \n",valor_corrida);

    return 0;





}