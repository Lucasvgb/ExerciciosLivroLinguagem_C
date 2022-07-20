#include <stdio.h>
#include <stdlib.h>

int main()
{
    double kelvin,celsius;
    printf("Escreve a conversao em kelvin: \n",kelvin);
    scanf("%lf",&kelvin);

    // formula C = K − 273.15 

    celsius = kelvin - 273.15;
    printf("O valor da conversao e:\n %lf",celsius);





return 0;

}