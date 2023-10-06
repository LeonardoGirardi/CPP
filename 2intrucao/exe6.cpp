/*Crie uma estrutura chamada Aluno que armazene informações sobre um aluno, incluindo nome,
idade, matrícula.*/

#include <iostream>

struct Aluno {
    char nome[100];
    int idade, matricula;
};

int main () {

    Aluno aluno1 = {"Luiz Soarez", 36, 123};

    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Matricula: %d\n", aluno1.matricula);

    return 0;
};
