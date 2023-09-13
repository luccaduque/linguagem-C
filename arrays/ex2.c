//Ler um vetor A com 15 elementos. Construir um vetor B de mesmo tipo, sendo que cada elemento do vetor B seja o fatorial do elemento correspondente do vetor A. Apresentar o vetor B.

#include <stdio.h>
int valor, fatorial, i, cont;
int main() {
    int vetorA[15];
    int vetorB[15];
    
    // Ler os valores para o vetorA
    for ( i = 0; i < 15; i++) {
        printf("Insira um valor inteiro: ");
        scanf("%d", &vetorA[i]);
    }
    
    // Calcular os fatoriais e armazenar em vetorB
    for (i = 0; i < 15; i++) {
        valor = vetorA[i];
        fatorial = 1;

        for (cont = 1; cont <= valor; cont++) {
            fatorial *= cont;
        }

        vetorB[i] = fatorial;
    }

    // Apresentar o vetorB
    printf("Vetor B (fatoriais):\n");
    for (i = 0; i < 15; i++) {
        printf("Posicao %d do vetor B -> %d\n", i + 1, vetorB[i]);
    }

    return 0;
}