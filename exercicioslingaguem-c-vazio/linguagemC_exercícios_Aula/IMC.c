#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    char sexo;

    printf("Digite sua ALTURA: \n",altura);
    scanf("%f",&altura);

    printf("Digite seu SEXO [F] ou [M]: \n",sexo);
    scanf("%c",&sexo);

    homem = (72.7  * altura)  - 58;
    mulher = (62. 1 * altura)  - 44.7;

    if (sexo == 'M')
    {
        printf("MULHER peso ideal e: \n ",mulher);
    }
    else
    {
        printf("HOMEM peso ideal e: \n ",homem);
    } 


    return 0;
}