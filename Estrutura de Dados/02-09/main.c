// ==========================================
// 3. ARQUIVO: interfaceFuncionario.c
// ==========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persistencia.h"

#define NOME_ARQUIVO "funcionario.dat"

void limpaBuffer() {
    int ch;
    do {
        ch = getchar();
    } while (ch != '\n' && ch != EOF);
}

void cadastro(char *nomeArquivo) {
    int mat, tamanho;
    TFuncionario rf;

    printf("\n--- CADASTRO DE FUNCIONARIO ---\n");
    printf("Forneça a matricula do funcionario: ");
    scanf("%d", &mat);

    if (pesquisaFuncionarioMatricula(nomeArquivo, mat, &rf) != -1) {
        printf("\n[ERRO] Matricula Repetida!!!\n");
    }
    else {
        rf.matricula = mat;
        limpaBuffer();
        printf("Forneça o nome: ");
        fgets(rf.nome, 100, stdin);
        tamanho = strlen(rf.nome);
        if (rf.nome[tamanho - 1] == '\n')
            rf.nome[tamanho - 1] = '\0';
        else
            limpaBuffer();

        printf("Forneça o salario: ");
        scanf("%f", &rf.salario);

        if (salvaFuncionario(nomeArquivo, rf)) {
            printf("\nFuncionario cadastrado com sucesso!\n");
        }
        else {
            printf("\n[ERRO] Nao foi possivel salvar o funcionario.\n");
        }
    }
}

void consulta(char *nomeArquivo) {
    int mat;
    TFuncionario rf;

    printf("\n--- CONSULTA DE FUNCIONARIO ---\n");
    printf("Forneça a matricula do funcionario: ");
    scanf("%d", &mat);

    if (pesquisaFuncionarioMatricula(nomeArquivo, mat, &rf) == -1) {
        printf("\n[ERRO] Matricula Inexistente!!!\n");
    }
    else {
        printf("\n=========================================\n");
        printf("           DADOS DO FUNCIONARIO          \n");
        printf("=========================================\n");
        printf(" Matr�cula : %d\n", rf.matricula);
        printf(" Nome      : %s\n", rf.nome);
        printf(" Sal�rio   : R$ %.2f\n", rf.salario);
        printf("=========================================\n");
    }
}

void alteracao(char *nomeArquivo) {
    TFuncionario rf;
    int mat, tamanho;

    printf("\n--- ALTERAÇAO DE FUNCIONARIO ---\n");
    printf("Forneça a Matricula: ");
    scanf("%d", &mat);

    if (pesquisaFuncionarioMatricula(nomeArquivo, mat, &rf) != -1) {
        limpaBuffer();

        printf("Novo Nome: ");
        fgets(rf.nome, 100, stdin);
        tamanho = strlen(rf.nome);
        if (rf.nome[tamanho - 1] == '\n')
            rf.nome[tamanho - 1] = '\0';
        else
            limpaBuffer();

        printf("Novo Salario: ");
        scanf("%f", &rf.salario);
        rf.matricula = mat;

        if (alteraFuncionario(nomeArquivo, rf)) {
            printf("\nDados alterados com sucesso!\n");
        }
        else {
            printf("\nFalha ao atualizar dados no arquivo.\n");
        }
    }
    else {
        printf("\nMatr�cula Inexistente!!!\n");
    }
}

void listagem(char *nomeArquivo) {
    TFuncionario *vf;
    int tamanho, i;

    vf = getFuncionarios(nomeArquivo, &tamanho);
    if (vf != NULL) { /
        printf("\n=======================================================\n");
        printf(" %-10s | %-30s | %-10s\n", "MATRICULA", "NOME", "SALARIO");
        printf("=======================================================\n");

        for (i = 0; i < tamanho; i++) {
            printf(" %-10d | %-30.30s | R$ %7.2f\n", vf[i].matricula, vf[i].nome, vf[i].salario);
        }

        printf("=======================================================\n");
        printf(" Total de registros: %d\n", tamanho);
        printf("=======================================================\n");

        free(vf);
    }
    else {
        printf("\nNenhum funcionario cadastrado ou erro na leitura do arquivo.\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\n=========================================\n");
        printf("          SISTEMA DE FUNCION�RIOS        \n");
        printf("=========================================\n");
        printf(" 1 - Cadastro\n");
        printf(" 2 - Consulta\n");
        printf(" 3 - Listagem\n");
        printf(" 4 - Altera��o\n");
        printf(" 5 - Fim\n");
        printf("-----------------------------------------\n");
        printf(" Forne�a sua op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastro(NOME_ARQUIVO);
                break;
            case 2:
                consulta(NOME_ARQUIVO);
                break;
            case 3:
                listagem(NOME_ARQUIVO);
                break;
            case 4:
                alteracao(NOME_ARQUIVO);
                break;
            case 5:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOp��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
