#include <stdio.h>
#include <stdlib.h>
 #include <locale.h> setlocale(LC_ALL,"portuguese");

/*
Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips.
Faça um programa que calcule o valor total a ser pago por uma pessoa.
O programa deverá ler o valor total da compra efetuada e um código que identifique se 
o comprador é um cliente comum (1), funcionário (2) ou vip (3).
*/

int main()
{
    
    float valor_total,valor_compra;
    int codigo;
    printf("Digite o valor da compra: ");
    scanf("%f",&valor_total);

    printf("\nQual e o tipo do cliente\n");
    printf("Digite 1: Cliente comum\n");
    printf("Digite 2: Funcionario\n");
    printf("Digite 3: VIP\n");
    scanf("%d",&codigo);

    switch (codigo)
    {
        case 1:
        printf("Valor total a ser pago: %.1f",valor_compra);
        break;

        case 2:
        valor_compra = valor_total - (valor_total * 0.1);
        printf("Valor total a ser pago: %.2f",valor_compra);
        break;

        case 3:
        valor_compra = valor_total - (valor_total * 0.5);
        printf("Valor total a ser pago: %.2f",valor_compra);
        break;

        default:
        printf("\n opção invalida"); 
    }   
    return 0;
}


