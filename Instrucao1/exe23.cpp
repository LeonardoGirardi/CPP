//Apresentar todos os números primos entre 5 e 1700.

#include <stdio.h>
#include <math.h>

int main(){

    for(int i = 5; i < 1700; i+=2)
    {
/*Método de verificação por divisão: testar se o número é divisível por todos os inteiros de 2 até a raiz quadrada do próprio número. Se não houver nenhum divisor encontrado nesse intervalo, o número é primo*/
        int primo = 0;
        for(int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                primo++;
            }
        }
        if (primo == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
