//Apresentar os quadrados dos números inteiros de 15 a 35.

#include <stdio.h>

int main(){
    int a = 15;
    int b = 35;

    int i = a;
    while (i < 36){
        printf("%d ao quadrado = %d\n",i , i * i);
        i++;
    }

    return 0;
}
