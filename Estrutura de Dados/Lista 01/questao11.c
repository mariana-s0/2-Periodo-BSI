/*Questão 11
Escreva um programa que leia do usuário uma palavra (sem espaços). Após a leitura, aloque
dinamicamente uma área de memória com o tamanho exato necessário para armazenar a palavra,
incluindo o caractere terminador '\0'. Copie o conteúdo da string para essa nova área e exiba a
palavra copiada. Libere a memória ao final.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[100];
    int tam;
    char *aloca;

    printf("\nForneça uma palavra sem espaços :\n");
    fgets(palavra,100,stdin);
    tam = strlen(palavra);
    if(palavra[tam-1]=='\n')
    palavra[tam-1]='\0';
    tam = strlen(palavra)+1;
    aloca = (char*)malloc(tam*sizeof(char));
    if(aloca==NULL){
        printf("\nErro na alocação !!\n");
        return 1;
    }else
        strcpy(aloca,palavra);
        printf("\nPalavra : %s\n",aloca);

        free(aloca);
    return 0;
}
