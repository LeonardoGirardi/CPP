/*
Ler dois valores para as variáveis A e B, efetuar a troca dos valores de forma que a variável A
passe a possuir o valor da variável B e que a variável B passe a possuir o valor da variável A.
Apresentar os valores trocados.
*/


#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Insira um valor para A: \n");
    scanf("%d", &a);

    printf("Insira um valor para B: \n");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
