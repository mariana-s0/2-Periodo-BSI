/*Questão 06
Construa um programa (main) que aloque em tempo de execução 
(dinamicamente) uma matriz de ordem m x n (linha por coluna),
usando 1+m chamadas a função malloc. Agora, aproveite este 
programa para construir uma função que recebendo os parâmetros
m e n aloque uma matriz de ordem m x n e retorne um ponteiro 
para esta matriz alocada. Crie ainda uma função para liberar a 
área de memória alocada pela matriz. Finalmente, crie um novo 
programa (main) que teste/use as duas funções criadas acima.
*/

#include <stdio.h>
#include <stdlib.h>
int* alocaMatriz(int m, int n){
    int *lin, *col;
    int *matriz;

    lin = (int*)malloc(m*sizeof(int));
    col = (int*)malloc(n*sizeof(int));

    if(lin==NULL){
        printf("\nErro na alocação\n");
        return 1;
    }else{
        if(col==NULL){
            printf("\nErro na alocação\n");
            return 1;
        }else{
            for(int i=0;i<m;i++){

            }
        }
    }
    return matriz;
}
int main(){

    int *lin, *col;
    int m, n;
    int *mat;

    printf("\nForneça o valor de m :\n");
    scanf("%d",&m);
    printf("\nForneça o valor de n :\n");
    scanf("%d",&n);

    mat = alocaMatriz(m,n);

    return 0;
}