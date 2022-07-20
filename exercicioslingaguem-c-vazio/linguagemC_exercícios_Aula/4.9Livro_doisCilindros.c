#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em C que calcule o volume de
dois cilindros circulares e que verifique qual deles é
maior. O raio e altura dos cilindros serão informados
pelo usuário. Observação: Vπx r2 x h, em que π=3,14,
r = raio e h = altura.
*/
int main()
{
    float raio1,altura1,volume1;
    printf("Digite a altura do primeiro cilindro: ",altura1);
    scanf("%f",&altura1);
    printf("Digite o raio do primeiro cilindro: ",raio1);
    scanf("%f",&raio1);
    // Calculando o volume do primeiro cilindro
    volume1 = (3,14 *((raio1 * raio1)*altura1));
    printf("Esse e o volume do cilindro PRIMEIRO : %.2f \n",volume1);

    float raio2,altura2,volume2;
    printf("Digite a altura do segundo cilindro: ",altura2);
    scanf("%f",&altura2);
    printf("Digite o raio do segundo cilindro: ",raio2);
    scanf("%f",&raio2);
    // Calculando o volume do primeiro cilindro
    volume2 = (3,14 *((raio2 * raio2)*altura2));
    printf("Esse e o volume do SEGUNDO cilindro: %.2f \n",volume2);
    // Verificando qual e o maior.
    if (volume1 > volume2)
    {
        printf("O primeiro cilindro e maior \n");
    }
    if(volume2 > volume1)
    {
        printf("O segundo cilindro e maior \n");
    }
    if(volume2==volume1)
    {
        printf("Eles sao iguais \n");
    }

    return 0;
}