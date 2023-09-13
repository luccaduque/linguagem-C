// Apresentar todos os números divisíveis por 5 que sejam menores que 150.

#include <stdio.h>
int cont, n, result;

    int main () {

        for (cont = 5; cont <=150; cont++){

            if (cont % 5 == 0) {

               result = cont;
               printf("\n%d eh um numero divisivel por 5.\n", result);
            }
        }
        return 0;
    }