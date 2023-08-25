//Ler um valor inteiro que representa o mês de uma data e apresentar o trimestre correspondente.

#include <stdio.h>

int main(){
    int a;

    printf("Digite o número de um mês do ano: \n");
    scanf("%d", &a);

    if((a > 0)&&(a < 4)){
        printf("O mes %d pertence ao 1º trimestre\n", a);
    }
    else if((a > 3)&&(a < 7)){
        printf("O mes %d pertence ao 2º trimestre\n", a);
    }
    else if((a > 6)&&(a < 10)){
        printf("O mes %d pertence ao 3º trimestre\n", a);
    }
    else if((a > 9)&&(a < 13)){
        printf("O mes %d pertence ao 4º trimestre\n", a);
    }else{
        printf("O numero %d não corresponde a nenhum mes\n", a);
    }


    return 0;
}
