//Ler dois vetores A e B com 20 elementos cada. Construir um vetor C onde, cada elemento de C é a subtração do elemento correspondente de A com B. Apresentar os vetores A, B e C.
 
#include <stdio.h>
int i;
    int main()
    {
        float vetorA[20];
        float vetorB[20];
        float vetorC[20];

            for (i = 1; i <=20; i++)
            {
                printf("\nInsira um numero (Vetor A) ->  ");
                scanf("%f", &vetorA[i]);
            } 

            for (i = 1; i <=20; i++)
            {
                printf("\nInsira um numero (Vetor B) ->  ");
                scanf("%f", &vetorB[i]);
            }

            for (i = 1; i <=20; i++)
            {
                vetorC[i] = vetorA[i] - vetorB[i];
            }

            for (i = 1; i <=20; i++)
            {
                printf("\nVETOR A ->  Posicao %d = %.2f\n\n", i, vetorA[i]);
            }

            for (i = 1; i <=20; i++)
            {
                printf("\nVETOR B ->  Posicao %d = %.2f\n\n", i, vetorB[i]);
            }

            for (i = 1; i <=20; i++)
            {
                printf("\nVETOR C ->  Posicao %d = %.2f\n\n", i, vetorC[i]);
            }
    return 0;
    }
