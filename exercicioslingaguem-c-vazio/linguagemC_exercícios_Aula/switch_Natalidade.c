#include <stdio.h>
#include <stdlib.h>

/*
A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental 
importância por ajudar a compreender aquilo que os especialistas chamam de 
dinâmica populacional e a entender sua relação com variáveis que influenciam o desenvolvimento, 
como qualidade de vida, migrações, , fatores socioeconômicos e localização.
Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando switch.
Observação : 
A taxa de natalidade é calculada pela seguinte fórmula: 
taxa de natalidade = (número de crianças nascidas x 1000) / número de habitantes;
Enquanto que, a taxa de mortalidade = (números de óbitos x 1000) /número de habitantes.
*/

int main()
{   
    char menu;
    float natalidade, criancas_nascidas, numero_habitantes;
    float mortalidade, obitos;

    printf("\n MDIGITE (N ou M) PARA CALCULAR \n");
    printf("N - A taxa de Natalidade");
    printf("M - A taxa de Mortalidade");
    scanf("%c",&menu);

    switch(menu)
    {
        case 'N':
        printf("\nDigite o numero de nascidos: \n");
        scanf("%f",&criancas_nascidas);
        printf("\nDigite o numero de habitantes: \n");
        scanf("%f",&numero_habitantes);
        natalidade = (criancas_nascidas * 1000) / numero_habitantes;
        printf("Essa e a taxa de Natalidade: %.2f",natalidade);

        break;

        case 'M':
        printf("\nDigite o numero de obitos: \n");
        scanf("%f",&obitos);
        printf("\nDigite o numero de habitantes: \n");
        scanf("%f",&numero_habitantes);
        mortalidade = (obitos * 1000) / numero_habitantes;
        printf("Essa e a taxa de Mortalidade: %.2f",mortalidade);
        break;

        default:
        printf(" \nopcao invalida");
    }
     
    return 0;
}