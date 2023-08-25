#include <stdio.h>
#include <math.h>

int main (){
    
    int a, b, c, d;

    printf("Ponto X:\n");
    scanf("%d", &a);

    printf("Ponto Y:\n");
    scanf("%d", &b);

    printf("Ponto X:\n");
    scanf("%d", &c);

    printf("Ponto Y:\n");
    scanf("%d", &d);

    int sub1 = b - a;
    int sub2 = d -c;
    int power1 = pow(sub1, 2);
    int power2 = pow(sub2, 2);

    float raiz = sqrt((float)power1 + power2);

    printf("%.2f\n", raiz);
    return 0;
}
