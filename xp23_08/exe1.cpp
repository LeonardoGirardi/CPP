#include <stdio.h>

int main(){
    int a, b, c;

    printf("Insira a primeira nota: \n");
    scanf("%d", &a);

    printf("Insira a segunda nota: \n");
    scanf("%d", &b);

    printf("Insira a terceira nota: \n");
    scanf("%d", &c);

    int media = (a + b + c)/3;

    printf("A média final é: %d\n", media);

    return 0;



}
