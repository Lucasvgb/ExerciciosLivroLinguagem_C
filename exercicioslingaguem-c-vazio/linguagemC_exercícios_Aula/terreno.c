#include <stdlib.h>
#include <stdio.h>
/*Faça um programa para ler as dimensões de um terreno (comprimento ˜ c e largura l),
bem como o prec¸o do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela */
int main()
{
    int l,c,preco,a;

     printf(" Digite o comprimento do terreno: \n ");
     scanf("%i",&c);

     printf(" Digite a largura do terreno: \n ");
     scanf("%i",&l);

     printf(" Digite o preco do metro do arame R$ \n ");
     scanf("%i",&a);

     preco = c * l * a;

     printf(" O Custo para cercar o terreno eh R$%i ",preco);
     system(" pause");

     



    return 0;
}