#include <stdio.h>
#include <stdlib.h>


int main()
{   
    int a;
    int b;
    int c; 
    c = a - b;
    if ((a-b) < 0)
    {
        c = c * -4;
        printf("o valor de C e %d",c);
    }
    return 0;
}