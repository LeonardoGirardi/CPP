#include <stdio.h>
#include <math.h>

int main(){
    int a;
    float raio;
    float area;
    float lado;
    float lado_maior;
    float lado_menor;

    printf("Programa que calcula área de Figuras\n");

    printf("Digite |1| = circulo |2| = Quadrado |3| = Retangulo\n");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("Insira o valor do raio da circunferencia: \n");
            scanf("%f", &raio);
            area = 3.14 * pow(raio, 2);
            break;
        case 2:
            printf("Insira o valor dos lados: \n");
            scanf("%f", &lado);
            area = pow(lado, 2); 
            break;
        case 3:
            printf("Insira o valor do lado maior: \n");
            scanf("%f", &lado_maior);
            printf("Insira o valor do lado menor\n");
            scanf("%f", &lado_menor);
            area = lado_menor * lado_maior;
            break;
        default: 
            printf("Opção invalida!!\n");
    }
    
    printf("A área da figura %d é = %.2f\n", a, area);
    return 0;
}
