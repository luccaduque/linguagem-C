//Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 999 a 1500.


#include <stdio.h>
int cont;
    int main () {
         
        // for (inicio; fim; incremento) { instruções }
        //OBS: incremento +1 = cont++   incremento +2... = cont+= numero de incremento.
        
        for (cont = 999; cont <= 1500; cont+= 2) {
            
            printf("\n%d\n", cont);
        
        }
        return 0;
    }