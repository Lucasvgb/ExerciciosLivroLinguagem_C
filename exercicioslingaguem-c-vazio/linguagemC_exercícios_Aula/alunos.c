#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que leia a quantidade de alunas
e de alunos. Depois esse programa deve informar se
essa turma possui mais alunos ou mais alunas. Se
essa turma possuir a quantidade de alunas maior que
a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos
é igual a de alunas.
*/

int main()
{
    int alunos;
    int alunas;
    printf("Digite o numero de alunos: \n");
    scanf("%d",&alunos);
    printf("Digite o numero de alunas: \n");
    scanf("%d",&alunas);
    if (alunas > alunos)
    {
        printf("Numero de alunas maior, a quantidade exata e %d \n",alunas);
    }
    if ( alunos == alunas)
    {
        printf("Quantidade de alunos e alunas sao iguais %d e %d \n",alunos,alunas);
    }
    
    else
    {
        printf("Numero de alunos maior \n");
    }








    return 0;
}