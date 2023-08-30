//Ler 20 elementos de um vetor A e construir um vetor B de mesma
//dimensão com os mesmos elementos de A, porém estes deverão estar
//invertidos, ou seja, o primeiro elemento de A passa a ser o último de B, o
//segundo elemento de A passa a ser o penúltimo de B e assim por diante.
//Apresentar os vetores A e B.

#include <stdio.h> 

    int main()
    {
        int i;
        float vetorA[3];
        float vetorB[3];

            for (i = 0; i <= 2; i++)
            {
                printf("\nInsira um numero ->  ");
                scanf("%f", &vetorA[i]);
            }


            for (i = 2; i >= 0; i--)
            {
                vetorB[i] = vetorA[i];
            }

            for (i = 0; i <= 2; i++)
            {
               printf("\nVETOR A -> %.2f\n\n", vetorA[i]);
            }

            for (i = 2; i >= 0; i--)
            {
                printf("\nVETOR B -> %.2f\n\n ", vetorB[i]);
            }
  return 0;          
    }