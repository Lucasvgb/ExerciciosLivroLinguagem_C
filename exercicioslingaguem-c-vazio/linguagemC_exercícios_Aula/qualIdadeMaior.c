#include <stdio.h>
#include <stdlib.h>
/* Desenvolva um programa para comparar a idade de
Pedro e a de Joana e informar quem é o mais velho.
Dados de entrada: idade de Pedro e de Joana (tipo
das variáveis: inteiro, e valor em anos). Observação:
essas pessoas possuem idades diferentes. 
*/
int main()
{
    int idadePedro = 10;
    int idadeJoana = 11;

    if(idadePedro > idadeJoana)
    {
        printf("Pedro e o mais velho");
    }
    else 
        printf("Joana e a mais velha");



    return 0;
}