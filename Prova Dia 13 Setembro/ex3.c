#include <stdio.h>
float salario, precoquilo, quilowatts, total, desconto;

    int main()
    {
        printf("\nInsira o valor do salario minimo -> ");
        scanf("%f", &salario);

            precoquilo = salario / 7;
            precoquilo = precoquilo / 100;

        printf("\nInsira quantos quilowatts foram gastos ->  ");
        scanf("%f", &quilowatts);

        total = quilowatts * precoquilo;
        desconto = total * 0.9;

                printf("\nO valor de cada quilowatt eh -> R$%.2f\n", precoquilo);
                printf("\nO valor a ser pago eh -> R$%.2f\n", total);
                printf("\nCom desconto de 10 porcento, o valor a ser pago eh -> R$%.2f\n", desconto);
return 0;
    }