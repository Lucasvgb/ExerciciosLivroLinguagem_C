#include <stdio.h>
#include <stdlib.h>
/*
Desenvolva um programa para comparar a idade de
Pedro, de Joana e de Ismael e informar quem é o mais
velho. Dados de entrada: idade de Pedro, de Joana e
de Ismael (tipo das variáveis: inteiro, e valor em anos).
Considere que essas pessoas possuem idades diferentes. 
*/


int main()
{
    int idadeDoPedro, idadeDaJoana , idadeDoIsmael;
    printf("idade de pedro: \n",idadeDoPedro);
    scanf("%d",&idadeDoPedro);
    printf("idade da Joana: \n",idadeDaJoana);
    scanf("%d",&idadeDaJoana);
    printf("idade do Ismael: \n",idadeDoIsmael);
    scanf("%d",&idadeDoIsmael);
    if (idadeDoPedro > idadeDaJoana) && (idadeDoPedro > idadeDoIsmael)
    {
        printf("PEDRO e o mais velho dos tres \n",idadeDoPedro);
    }
    else
    {
        if (idadeDaJoana > idadeDoPedro) && (idadeDaJoana > idadeDoIsmael)
        {
            printf("JOANA e a mais velha dos tres \n");
        }
        if (idadeDoIsmael > idadeDoPedro) && (idadeDoIsmael > idadeDaJoana)
        {
            printf("ISMAEL e o mais velhos dos tres \n");
        }
    }






    return 0;
}