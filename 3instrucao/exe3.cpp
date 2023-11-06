/*Escreva uma função minmax que receba um vetor inteiro v[0..n-1] e os endereços de duas
variáveis inteiras, digamos min e max. Deposite nessas variáveis o valor de um elemento mínimo
e o valor do elemento máximo do vetor. Escreva também uma função main que crie o vetor de
inteiros e use a função minmax.
*/

#include <iostream>

void minmax(int[], int*, int*);

int main(){

int vec[] = {10, 20, 60};
int min, max;

minmax(vec, &min, &max);

printf("min = %d | max = %d\n", min, max);

return 0;
}

void minmax(int vec[], int *min, int *max){

*min = vec[0];
*max = vec[2];

}
