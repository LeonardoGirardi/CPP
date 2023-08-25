#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Insira um número para A: \n");
    scanf("%d", &a);

    printf("Insira um número para B: \n");
    scanf("%d", &b);

    printf("Insira um número para C: \n");
    scanf("%d", &c);

    if ((a <= b) && (b <= c)) 
        

        printf("Ordem crescente: %d, %d, %d\n", a, b, c);
    }
    else if((c <= b) && (b <= a)){
        printf("Ordem crescente: %d, %d, %d\n", c, b, a);
    }
    else if((b <= a) && (a <= c)){
        printf("Ordem crescente: %d, %d, %d\n", b, a, c);
    }
    else if((a <= c) && (c <= b)){ 
        printf("Ordem crescente: %d, %d, %d\n", a, c, b);
    }
    else if((c <= a) && (a <= b)) {
        printf("Ordem crescente: %d, %d, %d\n", c, a, b);
    }else{
        printf("Ordem crescente: %d, %d, %d\n", b, c, a);
    }

    return 0;
} 
