// Apresentar o fatorial de um número qualquer.

#include <stdio.h>
int cont, n, total;

    int main () {

        printf("\nInsira um numero inteiro e positivo ->  ");
        scanf("%d", &n);

            if (n == 0) {
                printf("\nA fatorial de 0 eh 1.\n");
                return 0;
            }

            if (n < 0) {
                printf("\nO numero inserido deve ser positivo!\n");
                return 0;
            }

                total = 1;
                for (cont = 2; cont <=n; cont++) {

                    total = total * cont;
                }

            printf("\nA fatorial de %d eh -> %d", n, total);

    }