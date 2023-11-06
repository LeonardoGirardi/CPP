/*Crie um programa com uma função que troque os valores de duas variáveis inteiras, digamos A e
B.
*/

#include <iostream>

int trocaValores(int*, int*);

int main(){

int x = 1;
int y = 2;

trocaValores(&x, &y);

printf("x = %d | y = %d\n", x, y);

return 0;
}

int trocaValores(int *x, int *y){

    int temp = *x;
    *x = *y;
    *y = temp;

    return 0;
}
