//Crie uma estrutura de dados para representar um PET,
//com nome e ano de nascimento.

#include <iostream>

struct MyPet{
    char name[20];
    int ano;
};

int main(){

    struct MyPet Mypet1 = {"Bob", 2015};

    printf("Apresenta o nome e ano de nascimento de um Pet\n");;
    printf("Nome: %s\n", Mypet1.name);
    printf("Nasceu em: %d\n", Mypet1.ano);

    return 0;
}
