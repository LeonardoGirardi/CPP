/* Escreva um programa com uma função hm que converta minutos em horas-e-minutos. A função
recebe um inteiro mnts e os endereços de duas variáveis inteiras, digamos h e m, e atribui valores
a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja igual a mnts. Escreva
também uma função main que use a função hm.
*/

#include <iostream>

void hm(int mnts, int *h, int *m){

*h = mnts / 60;
*m = mnts % 60;

}

int main(){

int mnts, h, m;
mnts = 125;

hm(mnts, &h, &m);

printf("%d min = %dh:%dmin\n",mnts, h, m);

}
