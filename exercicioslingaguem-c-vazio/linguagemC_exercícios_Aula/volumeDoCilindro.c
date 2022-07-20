#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em C que calcule o volume de
um cilindro circular, dados o seu raio e sua altura.
Observação: V = πx r2 x h, em que π=3,14, r = raio
e h = altura.
*/


int main()
{
    float raio,altura,volume;
    printf("Digite a altura do cilindro: ",altura);
    scanf("%f",&altura);
    printf("Digite o raio: ",raio);
    scanf("%f",&raio);
    // Calculando o volume
    volume = (3,14 *((raio * raio)*altura));
    printf("Esse e o volume do cilindro: %.2f",volume);

    return 0;
}
