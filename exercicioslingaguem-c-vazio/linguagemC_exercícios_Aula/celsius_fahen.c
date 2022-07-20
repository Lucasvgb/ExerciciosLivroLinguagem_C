#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius,fahrenheit;

    printf("Digite a temperatura em celsius:\n ",celsius);
    scanf("%lf",&celsius);

    fahrenheit = 9 * celsius / 5 + 32;
    printf("O valor da conversao e:\n %lf",fahrenheit);


return 0;

}


