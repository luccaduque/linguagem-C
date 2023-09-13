// Apresentar os resultados de uma tabuada de um número qualquer.

#include <stdio.h>
int cont, n, result;

        int main () {

            printf("\nInsira um numero inteiro diferente de zero ->  ");
            scanf("%d", &n);

                if (n == 0) {
                    printf("\nO numero inserido deve ser diferente de zero!\n");
                    return 0;
                }

                for (cont = 1; cont <= 10; cont++) {

                    result = n * cont;
                    printf("\n %d x %d = %d\n", n, cont, result);
                }
return 0;
        }