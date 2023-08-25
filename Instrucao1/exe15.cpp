//Apresentar o fatorial de um número informado pelo usuário

#include <stdio.h>

int main(){
    int num;

    printf("Insira um número inteiro: \n");
    scanf("%d", &num);

    int i = num - 1;

    while (i > 0) {
        num = num * i;
        i--;
    }
    printf("%d\n", num);
    return 0;
}

