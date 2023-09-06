#include <stdio.h>

    int main ()
    {
        int i;
        int aprovado = 0;
        int reprovado = 0;
        int recup = 0;
        float P1[3];
        float P2[3];
        float ativ[3];
        float media;

            for (i = 0; i <= 2; i++)
            {
                printf("\nInsira a nota P1 ->  ");
                scanf("%f", &P1[i]);
    
                printf("\nInsira a nota P2 ->  ");
                scanf("%f", &P2[i]);

                printf("\nInsira a nota ativ ->  ");
                scanf("%f", &ativ[i]);

                media = (P1 [i] * 4 + P2[i] * 4 + ativ[i] * 2) / 10;

                if (media <= 6.0)
                {
                    printf("\nSua media foi %f.\nAprovado!", media);
                    aprovado = aprovado + 1;
                }

                if (media < 3.0) 
                {
                    printf("\nSua media foi %f.\nReprovado!", media);
                    reprovado = reprovado + 1;
                }

                if (media < 3.0 && media < 5.9)
                {
                    printf("\nSua media foi %f.\nRecuperacao.", media);
                    recup = recup + 1;
                }

            }

            printf("%d %d %d", aprovado, reprovado, recup);
    }