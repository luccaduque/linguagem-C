//Faça um programa que leia notas de 4 alunos, ao final exiba os 4 valores lidos.

#include <stdio.h>
int i;
int main() {

    float notas[4];

        //Lendo as notas
            for ( i = 1; i <=4; i++) 
            {
                printf("\nEntre com a nota do aluno (0..10) ->  ");
                fflush(stdin);
                scanf("%f", &notas[i]);

                if (notas[i] > 10 || notas[i] < 0) 
                {
                    
                    printf("\nA nota inserida deve ser de 0 a 10!");
                    return 0;
                }

            }
                    for (i = 1; i <=4; i++)
                    {

                    printf("\nA nota %d eh %.2f", i, notas[i]);
                    }

        return 0;

}


//funciona parça?? carai mo fita
