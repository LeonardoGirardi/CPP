//Ler dois valores numéricos e apresentar a diferença do maior pelo menor.
//
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Digite um número inteiro: \n");
    scanf("%d", &a);

    printf("Digite outro número inteiro: \n");
    scanf("%d", &b);

    if (a > b) {
        c = a - b;
    } else if (a < b) {
        c = b - a;
    } else {
        c = 0;
    }

    printf("A diferença do maior pelo menor é: %d\n", c);

    return 0;
}
