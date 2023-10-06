//Crie uma estrutura de dados para representar uma data com dia, mês e ano.
//

#include <iostream>

struct Data{
    int dia;
    int mes;
    int ano;
};


int main () {

    struct Data Data1;

    Data1.dia = 12;
    Data1.mes = 12;
    Data1.ano = 2002;

    printf("%d/%d/%d\n", Data1.dia, Data1.mes, Data1.ano);



    return 0;
}
