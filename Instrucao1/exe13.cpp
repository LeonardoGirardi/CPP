//Apresentar os resultados da tabuada de um número qualquer.

#include <stdio.h>

int main(){
    int a;
    int mult;

    printf("Insira um número: \n");
    scanf("%d", &a);
    
    int i = 1;

    while (i < 11) {
        mult = a * i;
        printf("%d X %d = %d\n", a, i, mult);
        i++;
    }
    return 0;
}
        
