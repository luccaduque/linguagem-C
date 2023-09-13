//Como declarar array

#include <stdio.h>
int main () 
        {
            //tipo Nome_Do_Vetor [quantidade]
            float teste[4];

            //como declarar vetor com valores já definidos
            float teste2[4] = {2.5, 5.4, 1.0, 3.0};

            //como exibir os elementos do vetor
            int i;
            for (i = 0; i <= 3; i++)
            {
                printf("\nPosicao %d = %.2f", i+1, teste2[i]); //note a importancia do i+1 (do contrário, Posição 0, 1, 2...)
                fflush(stdin);
            }

            //como inserir (ler) valores no vetor
            int ii;
            float teste3[4];

            for (ii = 1; ii <= 4; ii++) 
            {
                printf("\n\nDigite um numero ->  ");
                fflush(stdin);
                scanf("%f", &teste3[ii]);
                printf("\n%.2f\n", teste3[ii]);
            }
        return 0;
        }