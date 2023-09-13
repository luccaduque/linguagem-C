//Ler 5 elementos de um vetor A. No final, apresentar o total da soma de todos os elementos que sejam ímpares. 

    #include <stdio.h>
    int i;
        int main () {
            
            int vetorA[5];

                    for (i = 0; i <= 4; i++)
                    {
                        printf("\nInsira um valor inteiro ->  ");
                        scanf("%d", &vetorA[i]);
                    }
                        int impar = 0;
                        for ( i = 0; i <= 4; i++)
                        {
                            if (vetorA[i] % 2 != 0)
                            {
                                impar = vetorA[i] + impar;
                            }
                        }
 
                        printf("\nA soma de todos os numeros impares ->  %d\n", impar);
 return 0;                       
        }