/*Defina uma estrutura chamada Livro que contenha informações sobre um livro, como título, autor
e ano de publicação*/

#include <iostream>

struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
};


int main()
{
    struct Livro Livro1 = {"Confissoes", "Agostinho", 426};

    printf("Livro: %s\n", Livro1.titulo);
    printf("Autor: %s\n", Livro1.autor);
    printf("Ano: %d\n", Livro1.ano);

    return 0;

}
