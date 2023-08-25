/*
Ler dois valores inteiros (variáveis A e B) e apresentar a adição destes valores, quando a variável
A for maior que B, caso contrário, efetuar a multiplicação das variáveis.
*/

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Insira um valor inteiro para A: \n");
    scanf("%d", &a);

    printf("Insira um valor inteiro para B: \n");
    scanf("%d", &b);

    if (a > b) {
        c = a + b;
    } else {
        c = a * b;
    }

    printf("Resultado: %d\n", c);

    return 0;
}
