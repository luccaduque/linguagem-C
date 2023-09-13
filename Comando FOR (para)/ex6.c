//Elaborar um programa que apresente no final, o somatório dos valores pares existentes na faixa de 10 até 20.

#include <stdio.h>
int cont, par, soma;

    int main () {

        par = 0;
        for (cont = 10; cont <=20; cont++) {
            
            if (cont % 2 == 0) {
                
                par = cont;
                soma = par + soma;
                
                }
        }
        printf("\nO somatorio dos valores pares existentes na faixa de 10 ate 20 eh ->  %d.\n", soma);
        return 0;
    }
