/* Crie uma estrutura chamada DisciplinaCursada que armazena informações sobre um aluno e uma
disciplina, incluindo um aluno, uma disciplina, o ano e o semestre em que cursou a disciplina e
três notas da disciplina.*/


#include <iostream>

struct DisciplinaCursada {
    char aluno[100], disciplina[100];
    int ano, semestre, notas[3];
};

int main () {

    DisciplinaCursada aluno1 = {"Julio Cesar", "Matematica", 2015, 2, {8, 9, 10}};

    return 0;
}
