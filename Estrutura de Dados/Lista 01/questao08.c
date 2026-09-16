/*Questão 08
Idem a questão acima, mas construa as funções usando referências (&)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    int dia;
    int mes;
    int ano;
    char cpf[15];
}Tcadastro;
void limpaBuffer(){
    int c;
    do{
        c = getchar();

    }while(c!='\n' && c!=EOF);
}
void preencheCad(Tcadastro **cadastro){
    int tam;
    printf("\nForneça o nome :\n");
    fgets((*cadastro)->nome,100,stdin);
    tam = strlen((*cadastro)->nome);
    if((*cadastro)->nome[tam-1]=='\n')
    (*cadastro)->nome[tam-1]  = '\0';
    else
        limpaBuffer();
    
    printf("\nForneça o dia de nascimento :\n");
    scanf("%d",&(*cadastro)->dia);
    printf("\nForneça o mês de nascimento :\n");
    scanf("%d",&(*cadastro)->mes);
    printf("\nForneça o ano de nascimento :\n");
    scanf("%d",&(*cadastro)->ano);
    limpaBuffer();
    printf("\nForneça o CPF :\n");
    fgets((*cadastro)->cpf,15,stdin);
    tam = strlen((*cadastro)->cpf);
    if((*cadastro)->cpf[tam-1]=='\n')
    (*cadastro)->cpf[tam-1]  = '\0';
    else
        limpaBuffer();
}
void imprimeCad(Tcadastro **cadastro){

    printf("\nNome :%s\n",(*cadastro)->nome);
    printf("\nData de nascimento : %d/%d/%d\n",(*cadastro)->dia,(*cadastro)->mes,(*cadastro)->ano);
    printf("\nCPF : %s\n",(*cadastro)->cpf);
}
int main(){
    Tcadastro **cadastro;
    *cadastro = (Tcadastro*)malloc(sizeof(Tcadastro));
    if(cadastro==NULL){
        printf("\nErro na alocação !!\n");
    }
    preencheCad(&(*cadastro));
    imprimeCad(&(*cadastro));

    free(*cadastro);
    return 0;
}