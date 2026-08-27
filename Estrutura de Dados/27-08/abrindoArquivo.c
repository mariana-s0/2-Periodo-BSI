#include <stdio.h>
#include <string.h>
void limpaBuffer(){
    int c;
    do{
        c= getchar();
    }while(c!='\n' && c != EOF);
}
int main(){

    FILE *arq;
    char matricula[10],nome[100];
    int sair,tamanho;
    float salario;

    arq = fopen("dados.txt","a");

    if(arq != NULL){
        do{
            printf("\nForneça a matricula :\n");
            fgets(matricula,10,stdin);

            tamanho=strlen(matricula);
            if(matricula[tamanho-1]=='\n'){
                matricula[tamanho-1]='\0';
            }else{
                limpaBuffer();
            }
            printf("\nForneça o nome:\n");
            fgets(nome,100,stdin);

            tamanho=strlen(nome);
            if(nome[tamanho-1]=='\n'){
                nome[tamanho-1]='\0';
            }else{
                limpaBuffer();
            }
            printf("\nForneça o salario:\n");
            scanf("%f",&salario);

            fprintf(arq,"%s;%s;%.2f",matricula,nome,salario);
            
            printf("\nDeseja sair ? 1-SIM 2-NAO\n");
            scanf("%d",&sair);

        }while(sair!=1);
        fclose(arq);
    }else
        printf("\nErro na abertura do arquivo !!\n");

    return 0;
}