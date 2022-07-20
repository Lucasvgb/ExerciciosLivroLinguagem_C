#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
Escreva um programa que informe o valor de uma
corrida de taxi. Para calcular o valor da corrida é
necessário saber a distância percorrida em quilômetros
e qual o tipo da bandeira da corrida, 1 ou 2. Caso a
bandeira seja 1, o preço do quilometro percorrido é
de R$ 1,80, se a bandeira for 2 o valor é de R$ 2,30.
Escreva um programa em linguagem C que solicite a distância percorrida em quilômetros e qual o tipo da
bandeira da corrida e informe o valor da corrida.
*/

int main()
{   
    float km,valor,valor_corrida;
    int bandeira;

    printf("Digite a distancia em KM: ");
    scanf("%f",&km);

    printf("Digite o numero da bandeira (1 ou 2): ",bandeira);
    scanf("%d",&bandeira);

    if(bandeira == 1)
    {
        valor = 1,8;
    }
    if(bandeira == 2)
    {
        valor = 2,3;
    }

    valor_corrida = valor * km;
    printf("o valor da corrida e: R$ %.2f \n",valor_corrida);

    return 0;
}