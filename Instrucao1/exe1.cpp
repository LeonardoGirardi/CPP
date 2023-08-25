/*
Ler dois valores inteiros (variáveis A e B) e efetuar as operações de adição, subtração,
multiplicação e divisão de A por B, apresentando ao final os quatro resultados obtidos.
*/

#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Digite um número inteiro para A: \n");
    scanf("%d", &num1);

    printf("Digite um número inteiro para B: \n");
    scanf("%d", &num2);

    printf("Soma = %d\n", num1 + num2);
    printf("Diferença = %d\n", num1 - num2);
    printf("Divisão = %d\n", num1 / num2);
    printf("Multiplicação = %d\n", num1 * num2);

    return 0;
}
