// Entrar com 15 números e apresente a soma e a média desses números.

#include <stdio.h>
int cont, n, soma, media;

    int main() {

        soma = 0;
        for (cont = 1; cont <= 15; cont++) {

            printf("\nInsira um numero ->  ");
            scanf("%d", &n);

                soma = soma + n;
      
        }

            media = soma / 15;
            printf("\nA soma dos numeros inseridos eh %d e a media eh %d.",soma, media);
    }