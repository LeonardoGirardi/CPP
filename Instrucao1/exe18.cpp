/*
Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce 3
centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários
para que Ciclano seja maior que Fulano.
*/

#include <stdio.h>

int main(){
    int fulano = 150;
    int ciclano = 110;
    
int i = 1;

while(fulano != ciclano){
    fulano += 2;
    ciclano += 3;
    i++;
}

printf("Serão necessarios %d anos\n", i);
    
    return 0;
}


