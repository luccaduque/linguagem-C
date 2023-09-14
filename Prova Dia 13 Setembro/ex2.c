#include <stdio.h>
int impar, par, n, i, menor, maior, menorn, maiorn, total;

        int main()
        {
            impar = 0;
            par = 0;
            int vetorA[30];

                    for ( i = 0; i <= 29; i++)
                    {
                        printf("\nDigite um numero inteiro ->  ");
                        scanf("%d", &n);
                        vetorA[i] = n;

                            if (i==0)
                            {
                                menor = n;
                                maior = n;
                            }

                            if (n % 2 != 0)
                            {
                                if (impar == 0)
                                    impar = n;

                                    if (impar < n)
                                    {
                                        impar = n;
                                    }
                            }

                            else 
                            {
                                if (par == 0)
                                    par = n;

                                    if (par > n)
                                    {
                                        par = n;
                                    }
                            }

                            if (n > maior)
                            {
                                maior = n;
                                maiorn = n;
                            }

                            if (n > menor)
                            {
                                menor = n;
                                menorn = n;
                            }
                    }

                        total = menorn + maiorn;

                    printf("\n Menor par = %d  Maior impar = %d\n", par, impar);

                    printf("\nA soma entre o menor e maior digitado, respectivamente, eh ->  %d\n", total);

                        for (i = 0; i <= 29; i++)
                        {
                            printf("\nO numero digitado foi -> %d ", i + 1, vetorA[i]);
                        }
return 0;
        }