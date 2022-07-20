#include <stdio.h>
#include <stdlib.h>

int main()
{

    float km_hora,metros_segundos;

        printf("Escreva a velocidade em KM por hora: \n",km_hora);
        scanf("%lf",&km_hora);

    metros_segundos = km_hora / 3.6;
        printf("O valor em metros por segundos: \n  %lf ",metros_segundos);
        
    system("pause");
return 0;

}

