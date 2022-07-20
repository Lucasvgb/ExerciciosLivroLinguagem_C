#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    for( a = 0 , b = 10 ; a<=10 ; ++a , --b)
    {
        printf("%i",a);
        printf(" - ");
        printf("%i \n",b);
        
    }

    return 0;
}