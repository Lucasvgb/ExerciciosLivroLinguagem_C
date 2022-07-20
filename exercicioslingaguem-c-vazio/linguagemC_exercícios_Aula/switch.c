#include <stdio.h>
#include <stdlib.h>

/*
Elabore um algoritmo que leia dois valores do usuário e a operação que ele deseja executar
(Operações: soma, subtração, divisão, multiplicação). Execute a operação desejada e imprima na tela.
*/
int main()
{
    float valor_1,valor_2;
    int opcao;
    printf("Digite o primeiro valor: ",valor_1);
    scanf("%f",&valor_1);
    printf("Digite o segundo valor: ",valor_2);
    scanf("%f",&valor_2);

    printf("\n Qual operação deseja fazer:\n");
    printf("Digite 1: soma\n");
    printf("Digite 2: subracao\n");
    printf("Digite 3: divisao\n");
    printf("Digite 4: multiplicacao:\n");
    scanf("%d",&opcao);
    
    switch(opcao)
    {
        case 1:
        printf(" %.1f + %.1f = %.1f ",valor_1,valor_2,(valor_1 + valor_2));
        break;
        
        case 2:
        printf(" %.1f - %.1f = %.1f ",valor_1,valor_2,(valor_1 - valor_2));
        break;

        case 3:
        printf(" %.1f * %.1f = %.1f ",valor_1,valor_2,(valor_1 * valor_2));

        case 4:
        printf(" %.1f / %.1f = %.1f ",valor_1,valor_2,(valor_1 / valor_2));
        break;

        default:
        printf("\n opção invalida"); 
    }

    return 0;
}