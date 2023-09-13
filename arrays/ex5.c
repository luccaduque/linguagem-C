//Ler 15 elementos de um vetor A. Construir um vetor B do mesmo tipo, observando a seguinte lei de formação: “Todo elemento de B deverá ser o quadrado do elemento de A correspondente”. Apresentar o vetor B.

    #include <stdio.h>

        int main ()
        {
            int vetorA[15];
            int vetorB[15];
            int i;
            int quad;

                for (i = 0; i <= 14; i++)
                {
                    printf("\nValor VetorA ->  ");
                    scanf("%d", &vetorA[i]);
                }

                
                for ( i = 0; i <= 14; i++)
                {
                quad =  vetorA[i] * vetorA[i];
                vetorB[i] = quad;
                }

                for (i = 0; i <= 14; i++)
                {
                    printf("\nPosicao %d vetorB -> %d\n", i+1, vetorB[i]);
                }

                 
        }