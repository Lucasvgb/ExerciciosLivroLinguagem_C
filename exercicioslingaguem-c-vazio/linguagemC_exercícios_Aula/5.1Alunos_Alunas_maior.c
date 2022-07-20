#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que leia o número de alunos
e o de alunas de uma sala. Como saída, o programa
deve apresentar primeiro quem estiver em maior
quantidade. Por exemplo, se na sala tiver mais
alunos, apresente primeiro o número de alunos, caso
contrário apresente o número de alunas e depois o de
alunos. Considere o caso em que o número de alunos
é igual ao número de alunas
*/

int main()
{
    int alunos,alunas;
    printf("Digite o numero de ALUNOS: \n");
    scanf("%d",&alunos);
    printf("Digite o numero de ALUNAS \n");
    scanf("%d",&alunas);
    if(alunos > alunas)
    {
        printf("Numero de ALUNOS maior = %d\n",alunos);
        printf("Numero de alunas = %d\n",alunas);
    }
    else if (alunas > alunos)
    {
        printf("Numero de ALUNAS maior \n",alunas);
        printf("Numero de alunos = %d\n",alunos);
    }
    else if(alunos == alunas)
    {
        printf("Numero de IGUAL");
    }

    return 0;
}