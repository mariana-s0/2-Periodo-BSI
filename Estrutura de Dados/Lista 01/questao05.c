/*Questão 05
Idem a questão acima, mas use a função realloc.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, *vetor, tamanho=10, qntd=0, *novoVet, i, k;
    FILE *arq;
    arq = fopen ("arquivo.txt","w");

    vetor = (int*)malloc(tamanho*sizeof(int));

    if(vetor==NULL){
        printf("\nErro na alocação !!\n");
    }else{
        do{
        printf("\nForneça um número ou 0 para sair :\n");
        scanf("%d",&num);
        if(num!=0){
            if(qntd == tamanho){
                tamanho += 10;
                novoVet = (int*)realloc(vetor,tamanho*sizeof(int));
                if(novoVet==NULL){
                printf("\nErro na realocação !!\n");
                free(vetor);
                return 1;
                }
                free(vetor);
                vetor = novoVet;
                
            }
            vetor[qntd] = num;
            qntd ++;
        }
        }while(num!=0);
    }
    if(arq==NULL){
        printf("\nErro ao abrir arquivo !!\n");
        free(vetor);
        return 1;
    }else{
        for(k=0;k<qntd;k++){
            fprintf(arq,"%d\n",vetor[k]);
        }
        fclose(arq);
        printf("\n%d números gravados no arquivo",qntd);
        free(vetor);
    }

    return 0;
}