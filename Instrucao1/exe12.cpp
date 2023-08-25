/* 
Elabore um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
categorias:
infantil A = 5 - 7 anos
infantil B = 8 - 10 anos
juvenil A = 11 - 13 anos
juvenil B = 14 - 17 anos
*/

#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    
    if ((idade < 18) && (idade > 4)){
        if ((idade < 4) && (idade > 8)){
            printf("Pertence ao Infantil A\n");
        }else if ((idade < 7)&&(idade < 11)) {
            printf("Pertence ao Infantil B\n");
        }else if ((idade < 10)&&(idade < 14)) {
            printf("Pertence ao Juvenil A\n");
        }else{
            printf("Pertence ao Juvenil B\n");
        }
    }
    if (idade > 17){
        printf("Pertence a classe Senior\n");
    }

    return 0;
}
