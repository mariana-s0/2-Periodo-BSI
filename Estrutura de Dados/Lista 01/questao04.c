/*Questão 04
Faça um laço de entrada de dados, onde o usuário deve digitar uma sequência de números, sem
limite de quantidade de dados a ser fornecida. O usuário irá digitar os números um a um, sendo que
caso ele deseje encerrar a entrada de dados, ele irá digitar o número Zero. No final, todos os dados
digitados deverão ser salvos em um arquivo texto em disco. Atenção: os dados devem ser
armazenados na memória deste modo... faça com que o programa inicie criando um ponteiro para
um bloco (vetor) de 10 valores inteiros, e alocando dinamicamente espaço em memória para este
bloco; após, caso o vetor alocado esteja cheio; aloque um novo vetor do tamanho do vetor anterior
adicionado com espaço para mais 10 valores (tamanho N+10, onde N inicia com 10), copie os
valores já digitados da área inicial para esta área maior e libere a memória da área inicial; repita
este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada vez que o
mesmo estiver cheio. Assim o vetor irá ser “expandido” de 10 em 10 valores. Usar a função
malloc para alocar memória de forma dinâmica.*/

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
                novoVet = (int*)malloc((tamanho + 10)*sizeof(int));
                if(novoVet==NULL){
                printf("\nErro na alocação !!\n");
                free(vetor);
                return 1;
                }
                for(i=0;i<qntd;i++){
                novoVet[i] = vetor[i];
                }
                free(vetor);
                vetor = novoVet;
                tamanho += 10;
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
            fprintf(arq,"%d",vetor[k]);
        }
        fclose(arq);
        printf("\n%d números gravados no arquivo",qntd);
        free(vetor);
    }

    return 0;
}