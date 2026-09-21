/*Questão 17
Escreva um programa que leia um número inteiro n, correspondente ao 
tamanho de um vetor. Em seguida, aloque dinamicamente um vetor de n 
posições e preencha-o com números inteiros fornecidos pelo usuário. 
O programa deve então remover todas as ocorrências de valores repetidos, 
de modo que cada número apareça apenas uma vez. Para isso, reorganize o 
vetor e use a função realloc para reduzir seu tamanho ao mínimo necessário. 
Por fim, exiba o vetor resultante, contendo apenas os elementos únicos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j,k;
    int *vet, *temp;

    printf("\nForneça o valor de n :\n");
    scanf("%d",&n);

    vet = (int*)malloc(n*sizeof(int));

    if(vet==NULL){
        printf("\nErro na alocação\n");
        return 1;
    }else{
        for(i=0;i<n;i++){
            printf("\nForneça o valor do vetor na posição %d\n",i);
            scanf("%d",&vet[i]);
        }
        for(j=0;j<n;j++){
            for(k=i+1;k<n;k++){
                if(vet[j]==vet[k]){
                    for(int i=j;i<n-1;i++){
                        vet[i]= vet[i+1];
                    }
                    n--;
                    k--;
                }  
            }
        }
        temp = (int*)realloc(vet,n*sizeof(int));
        if(temp==NULL){
            
        }
    }
    return 0;
}