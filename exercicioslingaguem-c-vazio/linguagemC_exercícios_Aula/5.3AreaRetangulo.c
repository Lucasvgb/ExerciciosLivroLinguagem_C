#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva um programa para calcular e comparar
a área de dois retângulos A e B. O programa deverá
dizer qual retângulo possui a maior área ou se
ambos possuem tamanhos iguais. Dados de entrada:
tamanho da base e da altura (tipo das variáveis:
inteiro, valor em centímetros).
*/

int main()
{
    float base1,altura1,area_A,base2,altura2,area_B;
    printf("Digite a base do PRIMEIRO: ",base1);
    scanf("%f",&base1);
    printf("Digite a altura do PRIMEIRO : ",altura1);
    scanf("%f",&altura1);
    area_A = base1 * altura1;
    printf("Essa e a area do PRIMEIRO retangulo: %2.f \n",area_A);

    //Outro retangulo
    printf("Digite a base do SEGUNDO:",base2);
    scanf("%f",&base2);
    printf("Digite a altura do SEGUNDO:",altura2);
    scanf("%f",&altura2);
    area_B = base2 * altura2;
    printf("Essa e a area do SEGUNDO retangulo: %2.f \n",area_B);
    
    // Comparando os retângulos.
    if(area_A > area_B)
    { 
        printf("O PRIMEIRO e o maior");
    }
    else if(area_A < area_B)
    {
        printf("O SEGUNDO e o maior");
    }
    else
        printf("Eles sao iguais");



    return 0;
}