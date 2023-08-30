//Apresentar o total da soma obtido de N números inteiros, a partir do número 1 até N.

#include <stdio.h>
int cont,n, soma;
    int main () {

        printf("\nInsira um numero inteiro e positivo ->  ");
        scanf("%d", &n);

            if (n <=0) {
                printf("\nO numero inserido deve ser POSITIVO!\n");
                return 0;
            }
            soma = 0;

            for (cont = 1; cont <=n; cont++) {
                soma = soma + cont;
            }

            printf("\nO total da soma obtido de %d numeros inteiros, a partir do numero 1 ate %d, eh -> %d\n", n, n, soma);
            return 0;
    }