/*Questão 15
Escreva um programa que aloque dinamicamente um vetor de n inteiros.
Após o preenchimento do vetor, permita que o usuário escolha uma 
posição para remover um elemento. Após a remoção, reorganize os 
elementos para que não fiquem “buracos” no vetor, e utilize realloc 
para ajustar o tamanho da área de memória.Exiba o vetor resultante e, 
ao final, libere a memória. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, pos;
    int *vet, *temp;
    printf("\nForneça o valor de n :\n");
    scanf("%d",&n);

    vet=(int*)malloc(n*sizeof(int));

    if(vet==NULL){
        printf("\nErro na alocação\n");
        return 1;
    }else
        for(int i=0;i<n;i++){
            printf("\nForneça o valor do vetor na posição %d\n",i+1);  
            scanf("%d",&vet[i]);
        }

        printf("\nEscolha uma posição a ser removida :\n");
        scanf("%d",&pos);

        for(int j=pos;j<n-1;j++){
            vet[j]=vet[j+1];
        }
        n--;
    
        temp = (int*)realloc(vet,n*sizeof(int));
        if(temp!=NULL || n==0){
            vet = temp;
        }else{
             printf("\nErro na realocação\n");
            return 1;
        }
        printf("\nVetor :\n");
        for(int k=0;k<n;k++){
            printf("%d",vet[k]);
        }
        printf("\n");

        free(vet);

    return 0;
}