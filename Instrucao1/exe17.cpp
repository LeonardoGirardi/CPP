/*
A conversão de graus Fahrenheit para centígrados é obtida pela fórmula C=5/9(F-32). Escreva um
algoritmo que calcule e escreva uma tabela de graus centígrados em função de graus Fahrenheit
que variem de 50 a 150 de 1 em 1.
*/

#include <stdio.h>

int main(){

    float i;
    float celsius;

    for(i = 50;i < 151; i++){
        celsius = (i - 32) * 5/9;
        printf("%.1fºF = %.1fºC\n", i, celsius);
        i++;
    }
    return 0;
}
