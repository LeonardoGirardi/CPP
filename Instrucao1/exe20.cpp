/*Fulano realizou um empréstimo bancário de R$ 10.000,00 que deverão ser pagos em 24 meses
com juros de 2% ao mês, incluídos já na primeira parcela. Determine e apresente o valor da última
parcela e o montante pago ao final do empréstimo.*/

#include <stdio.h>
#include <math.h>

int main(){
    float soma = 0;
    float a = 10000;
    float b = 10000 / 24;
    float c = 10000 * 0.02;
    int i = 1;

    while (i < 24){
        soma = b + c;
        a = a + c;
        i++;
    }

    printf("O montante é de R$%.2f\n", a);
    printf("A ultima parcela será de R$%.2f \n", soma);

    return 0;
}
