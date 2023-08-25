//Apresentar a soma de todos os números divisíveis por 4 entre 40 e 200.

#include <stdio.h>

int main(){
    int a = 40;
    int i = a;
    int soma = 0;

    while(i < 201){
        if (i % 4 == 0){
            soma = soma + i;
            i++;
        }else{
            i++;
        }
    }

    printf("A soma é: %d\n", soma);

    return 0;
}
