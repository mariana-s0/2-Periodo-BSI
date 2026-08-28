#include <stdio.h>
#include <string.h>
void limpaBuffer(){
    int ch;
    do{
        ch = getchar();
    }while(ch != '\n' && ch !=EOF);
}
typedef struct{
    int matricula;
    char nome[100];
    float salario;
}TFuncionario;


void cadastro(FILE *arq){
    int mat,achou,tamanho;
    TFuncionario rf;
    
    printf("Forneça a matrícula do funcionário:");
    scanf("%d",&mat);
    //verificando se a matrícula é única
    //posicionando no início do arquivo
    fseek(arq,0,SEEK_SET);
    //rewind(arq);
    achou =0;
    while(fread(&rf,sizeof(TFuncionario),1,arq)==1){
        if(rf.matricula==mat){
            achou=1;
            break;
        }
    }
    
    if(achou==1)
        printf("\nMatrícula Repetida!!!\n");
    else{
        rf.matricula = mat;
        limpaBuffer();
        printf("Forneça o nome:");
        fgets(rf.nome,100,stdin);
        tamanho = strlen(rf.nome);
        if(rf.nome[tamanho-1]=='\n')
            rf.nome[tamanho-1]='\0';
        else
            limpaBuffer();
        printf("Forneça o salário:");
        scanf("%f",&rf.salario);
        //gravando o regisstro no arquivo
        //posicionando no final do arquivo
        fseek(arq,0,SEEK_END);
        fwrite(&rf,sizeof(TFuncionario),1,arq);
    }
}

void listagem(FILE *arq){
    TFuncionario rf;
    //posicionando no início do arquivo
    fseek(arq,0,SEEK_SET);
    printf("\nMatricula\t\tNome\t\t\t\t\tSalário\n");
    while(fread(&rf,sizeof(TFuncionario),1,arq)==1)
        printf("%d\t\t%s\t\t\t\t\t%.2f\n",rf.matricula,rf.nome,rf.salario);
}
int main(){
    FILE *a;
    int opcao;
    a=fopen("dados.dat","rb+");
    
    if(a==NULL)
        a=fopen("dados.dat","wb+");
    if (a!=NULL){
        do{
           printf("\n1-Cadastro\n2-Consulta\n3-listagem\n4-Fim") ;
           printf("\nForneça sua opção:");
           scanf("%d",&opcao);
           switch(opcao){
                case 1:
                   cadastro(a);
                   break;
                case 3:
                   listagem(a);
                   break;
                
           }
        }while(opcao !=4);
        
        fclose(a);
    }
    else
        printf("\nErro na abertura do arquivo!!!\n");
    return 0;
}
