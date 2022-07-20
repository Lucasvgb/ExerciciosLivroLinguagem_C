#include <stdio.h>
#include <stdlib.h>



int main()
{
 //Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.

    int ladoDoQuadrado,AlturaDoQuadrado,area;
    printf("Digite o tamanho do lado: \n",ladoDoQuadrado);
    scanf("%d",&ladoDoQuadrado);

    printf("Digite a Altura do Quadrado: \n",AlturaDoQuadrado);
    scanf("%d",&AlturaDoQuadrado);

    area = ladoDoQuadrado * AlturaDoQuadrado;
    printf("\nEssa e a Area do Quadrado:\n %d",area);


    return 0;
}