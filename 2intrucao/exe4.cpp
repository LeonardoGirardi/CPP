/*Crie uma estrutura de dados que represente uma vacina contendo tipo, e o animal PET a que foi
aplicado (utilize a estrutura criada anteriormente).*/

#include <iostream>

struct Vacina{
    char tipo[20];
    char name[20];
};


int main(){

    struct Vacina Vacina1 = {"Raiva-canina", "Bob"};

    printf("Vacina contra: %s\n", Vacina1.tipo);
    printf("Nome: %s\n", Vacina1.name);

    return 0;
}




