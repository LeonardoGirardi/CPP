/*Crie uma estrutura chamada Disciplina que armazene informações sobre uma disciplina, incluindo
nome e ementa.*/
#include <iostream>
#include <string>
using namespace std;

/*
 *
 * Primeira tentativa
 *
struct Disciplina{
    char name[50];
    char ementa[200];
};


int main(){
    struct Disciplina Disciplina1 = {
        "Matematica",
        "Calculo, limites, integral e Diferencial"
    };

    printf("Disciplina: %s\n", Disciplina1.name);
    printf("Ementa: %s\n", Disciplina1.ementa);

    return 0;
}*/

int main(){

    char name[100];

    printf("Digite a disciplina: \n");
    fgets(name, 100, stdin);

        printf("Nome: %s\n", name);

    return 0;
}






