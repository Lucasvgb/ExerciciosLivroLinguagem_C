#include <stdio.h>
#include <stdlib.h>

/*
Verifique a idade da pessoa,se é um bebê, criança, adolescente , adulto ou idoso
*/
int main()
{
// Vou usar o "Else if" para fazer essas verificações.
    int idade;
    printf("informe a IDADE: ");
    scanf("%d",&idade);
    if(idade <=5)
    {
        printf("BEBE");
    }
    else if (idade > 5 && idade <=10)
    {
        printf("CRIANCA \n");
    }
    else if (idade > 10 && idade <= 18)
    {
        printf("ADOLESCENTE \n");
    }
    else if(idade > 18 && idade >= 50)
    {
        printf("ADULTO \n");
    }
    else
    
        printf("IDOSO \n");
    

    return 0;
}