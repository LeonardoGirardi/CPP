//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule
//seu peso ideal, utilizando as seguintes fórmulas:

#include <stdio.h>

int main(){
    int sexo;
    float altura;
    float peso;

    printf("Insira 1 para masculino /// OU /// Insira 2 para Feminino:\n");
    scanf("%d", &sexo);
    printf("Insira sua altura: \n");
    scanf("%f", &altura);
           
    if (sexo == 1) {
        peso = (altura * 72.7) - 58;
    }
    else if(sexo == 2) {  
        peso = (altura * 62.1) - 44.7;
    }else {
        printf("Opção inválida!!\n");
    }

    printf("O peso ideal é: %.2f\n", peso);

    return 0;
}
