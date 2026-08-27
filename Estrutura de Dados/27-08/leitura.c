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
    int sair,opcao,tamanho;
    float salario;

    arq = fopen("dados.txt","r+");
    if(arq != NULL)
        arq = fopen("dados.txt","w+");
        
    if(arq==NULL){
        printf("\nErro na Abertura do arquivo!!\n");
        return 0;
    }

    //posicionando no final do Arquivo
    fseek(arq,0,SEEK_END);
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

            fprintf(arq,"%s;%s;%.2f\n",matricula,nome,salario);

            printf("\nDeseja sair ? 1-SIM 2-NAO\n");
            scanf("%d",&sair);

        }while(sair!=1);
        //posicionado no inicio do arquivo
        fseek(arq,0,SEEK_CUR);
        //rewind(arq);
        while(fscanf(arq,"%10[^;];%100[^;];%f\n",matricula,nome,salario)==3)
            printf("%s\t\t%s\t.2f\n",matricula,nome,salario);
        
        fclose(arq);

    return 0;
}