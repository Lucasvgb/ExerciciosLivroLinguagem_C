#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_1,nota_2,media;
    printf("Digite a PRIMEIRA nota: \n ",nota_1);
    scanf("%f",&nota_1);
    printf("Digite a SEGUNDA nota: \n ",nota_2);
    scanf("%f",&nota_2);

    if( ( nota_1 >= 0) && (nota_1 <= 10) && (nota_2>=0) && (nota_2<=10)
    {
        media = (nota_1 + nota_2)/2;
        printf("A media das notas e %.2f",media);
    }  
    else
    {
        printf("Notas invalidas \n");
    }

    return 0;
}