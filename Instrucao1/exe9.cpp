//Efetuar a leitura de três números inteiros e apresentar o maior valor.

#include <stdio.h>

int main(){
    int a,b,c;

    printf("Digite um valor inteiro para A: \n");
    scanf("%d", &a);

    printf("Digite um valor inteiro para B: \n");
    scanf("%d", &b);

    printf("Digite um valor inteiro para C: \n");
    scanf("%d", &c);

    if ((a > b) && (a > c)) {
        printf("%d e o maior número\n", a);
    }

    else if ((b > a) && (b > c)) {
        printf("%d e o maior número\n", b);
    }else{
        printf("%d e o maior número\n", c);
    }


    return 0;
}
