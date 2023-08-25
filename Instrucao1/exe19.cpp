/*Fulano aplicou R$ 100,00 com rendimento de 5% ao mês. Quantos meses serão necessários para o
capital investido ultrapasse a R$ 200,00.*/

#include <stdio.h>

int main(){
    float a = 100;
    float juro;
    int i = 1;

    while (a < 200){
        juro = a * i * 0.05;
        a += juro;
        i++;
    }

    printf("R$ %.2f\n", a);
    printf("Em %d meses\n", i);
    return 0;
}
