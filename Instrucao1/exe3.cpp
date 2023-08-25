/*
Dado um número inteiro de 3 algarismos, inverter a ordem de seus algarismos. Os três algarismos
do número dado são diferentes de zero. Utilize os operadores / e %.
*/


#include <stdio.h>

int main() {
    int a;

    printf("Digite um inteiro de 3 algarismos todos diferentes de 0: \n");
    scanf("%d", &a);

    int b = a / 100;
    int c = (a / 10) % 10;
    int d = (a % 10) % 100;
    int e = (d * 100) + (c * 10) + b;

    printf("Algarismos invertidos: %d\n", e);

    return 0;
