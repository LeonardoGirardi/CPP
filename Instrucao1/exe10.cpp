//Efetuar a leitura de três números inteiros e apresentar o menor e o menor valor.

#include <stdio.h>

int main(){
    int a,b,c;

    printf("Digite um valor inteiro para A: \n");
    scanf("%d", &a);

    printf("Digite um valor inteiro para B: \n");
    scanf("%d", &b);
    
    printf("Digite um valor inteiro para C: \n");
    scanf("%d", &c);
    

    int maior = a;

    if(b > maior){
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    
    int menor = a;

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    printf("O maior valor é %d\n", maior);
    printf("O menor valor é %d\n", menor);
      
    return 0;
}
