#include <stdio.h>
#include <stdlib.h>
#include "persistencia.h"

int salvaFuncionario(char *arquivo, TFuncionario rf) {
    FILE *a;
    int gravou;
    a = fopen(arquivo, "ab");
    if (a == NULL)
        return 0;
    gravou = fwrite(&rf, sizeof(TFuncionario), 1, a);
    fclose(a);
    return gravou;
}

int pesquisaPosicao(FILE *a, int mat) {
    TFuncionario r;
    int posicao = 0;
    fseek(a, 0, SEEK_SET);
    while (fread(&r, sizeof(TFuncionario), 1, a) == 1) {
        if (r.matricula == mat)
            return posicao;
        else
            posicao++;
    }
    return -1;
}

int pesquisaFuncionarioMatricula(char *arquivo, int mat, TFuncionario *rf) {
    FILE *a;
    int posicao = 0;
    a = fopen(arquivo, "rb");
    if (a == NULL)
        return -1;

    while (fread(rf, sizeof(TFuncionario), 1, a) == 1) {
        if (rf->matricula == mat) {
            fclose(a);
            return posicao;
        }
        else {
            posicao++;
        }
    }
    fclose(a);
    return -1;
}

int alteraFuncionario(char *arquivo, TFuncionario rf) {
    FILE *a;
    int posicao, gravou = 0;
    a = fopen(arquivo, "rb+");
    if (a == NULL)
        return 0;

    posicao = pesquisaPosicao(a, rf.matricula);
    if (posicao != -1) {
        fseek(a, posicao * sizeof(TFuncionario), SEEK_SET);
        gravou = fwrite(&rf, sizeof(TFuncionario), 1, a);
    }
    fclose(a);
    return gravou;
}

TFuncionario* getFuncionarios(char *arquivo, int *totalRegistros) {
    FILE *a;
    TFuncionario *v;

    a = fopen(arquivo, "rb");
    if (a == NULL) {
        *totalRegistros = 0;
        return NULL;
    }

    // Posicionando no final do arquivo para calcular quantidade de registros
    fseek(a, 0, SEEK_END);
    *totalRegistros = ftell(a) / sizeof(TFuncionario);

    if (*totalRegistros == 0) {
        fclose(a);
        return NULL;
    }

    v = (TFuncionario*) malloc(*totalRegistros * sizeof(TFuncionario));
    if (v != NULL) {
        // Posicionando no inicio do arquivo para leitura completa
        fseek(a, 0, SEEK_SET);
        fread(v, sizeof(TFuncionario), *totalRegistros, a);
    }
    fclose(a);
    return v;
}
