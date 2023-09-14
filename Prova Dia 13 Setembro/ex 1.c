#include <stdio.h>
int n, i, j ,x ,k;
        
        int main ()
        {
            printf("Digite a posicao do elemento que voce deseja -> ");
            scanf("%d", &n);
            i = 0;
            j = 1;
            k = 1;

                    while (k <= (n-1))
                    {
                        x = i + j;
                        i = j;
                        j = x;
                        k = k + 1;
                    }

                    printf("\nO ultimo valor de k eh -> %d \n", k);
                    printf("\nO ultimo valor de j eh -> %d \n", j);
return 0;
        }
        