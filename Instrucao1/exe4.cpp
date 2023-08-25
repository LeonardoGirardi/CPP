/*
Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo
um valor positivo, ou seja, o programa deverá apresentar o módulo de um número fornecido.i
*/


#include <stdio.h>

int main() {
    int a;

    printf("Digite um valor inteiro para A: \n");
    scanf("%d", &a);

    if (a < 0) {
        a = a * -1;
    }

    printf("O módulo do número lido é: %d\n", a);

    return 0;
}
