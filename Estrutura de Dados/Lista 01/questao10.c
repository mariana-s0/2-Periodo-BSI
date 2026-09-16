/*Questão 10
Implemente um programa que permita ao usuário cadastrar quantos números inteiros desejar, sem
que o tamanho do vetor seja previamente conhecido. Para isso, utilize a função realloc para
expandir o vetor a cada nova inserção. O processo de inserção continua indefinidamente até que o
usuário digite o valor -1, que deve ser tratado como sentinela de parada (não deve ser armazenado
no vetor). Ao final, exiba todos os números cadastrados na ordem em que foram inseridos e libere a
memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int *vet,*novoVet;
    int num,tam=1,qntd=0,i;
    vet = (int*)malloc(tam*sizeof(int));
    if(vet==NULL){
        printf("\nErro na alocação !!\n");
        return 1;
    }else
        do{
            printf("\nForneça um número ou -1 para sair :\n");
            scanf("%d",&num);
            if(num!=-1){
                vet[qntd]=num;
                qntd++;
                if(qntd==tam){
                    novoVet = (int*)realloc(vet,(tam+=1)*sizeof(int));
                    if(novoVet==NULL){
                        printf("\nErro na realocação !!\n");
                        free(vet);
                        return 1;
                    }else
                        vet=novoVet;
                }   
            }
        }while(num!=-1);
        printf("\nNúmeros alocados :\n");
        for(i=0;i<qntd;i++){
            printf("%d\t",vet[i]);
        }
        free(vet);

    return 0;
}