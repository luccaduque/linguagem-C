// comando for
// for (inicio; fim; incremento) { instruções }
        //OBS: incremento +1 = cont++   incremento +2... = cont+= numero de incremento ou -+
        

#include <stdio.h>
int main ()
{
        int cont;
        for (cont = 999; cont <= 1500; cont+= 2) {
            
            printf("\n%d\n", cont);
        
        }



//comando while
//  while (condição) {instruções}

    int contador = 1;
    while (contador <=20)
    {
        printf("\n%d\n", contador);
        contador = contador + 1;
    }



//arrays
//OBS : vetor com 10 lugares é 0..9!!
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

            for (ii = 0; ii <= 3; ii++) 
            {
                printf("\n\nDigite um numero ->  ");
                fflush(stdin);
                scanf("%f", &teste3[ii]);
                printf("\n%.2f\n", teste3[ii]);
            }
       
}

