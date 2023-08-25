/*Ler um número inteiro e determinar se ele é primo. Obs. um número é primo quando for divisível
somente por 1 e por ele mesmo.*/

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Programa que verifica se o  número é primo\n");
    printf("Insira um número inteiro:\n");
    scanf("%d", &num);

    int i;
    int primo = 0;

    for(i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            primo++;
        }
    }
    if(primo == 0) {
        printf("%d é primo\n", num);
    }else{
        printf("%d não é primo\n", num);
    }
    
        

    return 0;
}
