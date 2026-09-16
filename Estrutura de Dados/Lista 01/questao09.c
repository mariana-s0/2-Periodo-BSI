/*Questão 09
Faça um programa que leia um número inteiro n, representando a quantidade de elementos que
serão armazenados. Em seguida, aloque dinamicamente um vetor capaz de armazenar n inteiros.
O programa deve solicitar que o usuário digite os valores um a um, preenchendo todo o vetor. Após
a leitura, exiba todos os elementos armazenados na tela, na mesma ordem em que foram digitados.
Por fim, libere corretamente a memória alocada. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *alocaVet(int n){
    int *vet;
    int i;
    vet=(int*)malloc(n*sizeof(int));
    if(vet==NULL){
        printf("\nErro na alocação !!\n");
        return NULL;
    }else
    for(i=0;i<n;i++){
        printf("\nForneça o valor :\n");
        scanf("%d",&vet[i]);
    }
    return vet;
}
void imprimeVet(int *vet , int n){
    int k;
    printf("\nVetor:\n");
    for(k=0;k<n;k++){
        printf("%d\t",vet[k]);
    }
}
int main(){
    int n;
    int *vetor;
    printf("\nForneça o valor de n :\n");
    scanf("%d",&n);

    vetor=alocaVet(n);
    imprimeVet(vetor,n);

    return 0;
}