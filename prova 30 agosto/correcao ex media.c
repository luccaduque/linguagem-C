#include <stdio.h>


int i;

    int main()
    {
        float P1[3];
        float P2[3];
        float P3[3];
        float m;
        float porc1;
        float porc2;
        float porc3;
        int aprovado = 0;
        int reprovado = 0;
        int recup = 0;
        
            for(i=0; i<=2; i++){
                
                printf("\nInsira a nota P1 ->  ");
                scanf("%f",&P1[i]);
                
                printf("\nInsira a nota P2 ->  ");
                scanf("%f",&P2[i]);
                
                printf("\nInsira a nota P3 ->  ");
                scanf("%f",&P3[i]);
                
                m = (P1[i]*4 + P2[i]*4 + P3[i]*2)/10;
                
                if (m >= 6.0) 
                {
                    printf("\nAPROVADO\n");
                    aprovado = aprovado + 1;
                }
                
                else {
                    if (m > 3.0 && m <= 5.9)
                    {
                        printf("\nIFA\n");
                        recup = recup + 1;
                    }
                    
                    if (m < 3.0) 
                    {
                        printf("\nREPROVADO\n");
                        reprovado = reprovado + 1;
                    }
                }
            
            
    }
                porc1 = (aprovado * 100.0) / 3;
                porc2 = (reprovado * 100.0) / 3;
                porc3 = (recup * 100.0) / 3;
        
            
            printf("\nO numero de aprovados foi de %.2f%\n", porc1);
            printf("O numero de reprovados foi de %.2f%\n", porc2);
            printf("O numero de IFA foi de %.2f%\n", porc3);
    return 0;
    }
