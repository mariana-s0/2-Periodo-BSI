
#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

typedef struct {
    int matricula;
    char nome[100];
    float salario;
} TFuncionario;

int salvaFuncionario(char *arquivo, TFuncionario rf);
int pesquisaFuncionarioMatricula(char *arquivo, int mat, TFuncionario *rf);
int alteraFuncionario(char *arquivo, TFuncionario rf);
TFuncionario* getFuncionarios(char *arquivo, int *totalRegistros);

#endif



