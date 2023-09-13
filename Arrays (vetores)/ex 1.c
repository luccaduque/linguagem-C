//Ler 10 elementos de um vetor e apresentar os valores lidos. 

#include <stdio.h>
int i;

    int main() 
    {
        float elementos[10];

            for (i = 1; i <=10; i++)
                {
                    printf("\nInsira um numero ->  ");
                    scanf("%f", &elementos[i]);
                }

            for (i = 1; i <=10; i++)
            {
                printf("\nPosicao %d = %.2f", i, elementos[i]);
            }
    }