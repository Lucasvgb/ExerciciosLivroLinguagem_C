#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fahrenheit,celsius;

    print("Escreva a temperadura em fahrenheit: \n",fahrenheit);
    scanf("%lf",&fahrenheit);

    celsius = 5 * fahrenheit - 32/9;
    printf("O valor em celsius e: \n %lf",celsius);



return 0;

}
