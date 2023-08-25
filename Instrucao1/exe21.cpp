/*A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ..., etc. Escreva um
algoritmo que gere a série de Fibonacci até o vigésimo termo.*/

#include <stdio.h>

int main (){
    int soma;
    int a = 1;

    for(int i = 0; i < 20; i++){
        soma = soma + a;
        a = soma - a;
        printf("%d\n", soma);
    }
    return 0;
}
