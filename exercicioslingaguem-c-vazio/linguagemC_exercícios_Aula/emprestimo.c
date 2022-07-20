#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int salario,parcela;
    printf("Digite seu SALÁRIO: \n",salario);
    scanf("%d",&salario);
    parcela = 500.00;
    if ( parcela > salario * 0.2) //Errei aqui, precisei ver na internet, faltou matemática.
    {
        printf("Emprestimo NÃO concedido \n");
    }
    else
    {
        printf("Emprestimo CONCEDIDO \n");
    }

    return 0;
}