/*Questão 06
Construa um programa (main) que aloque em tempo de execução (dinamicamente) uma matriz de
ordem m x n (linha por coluna), usando 1+m chamadas a função malloc. Agora, aproveite este
programa para construir uma função que recebendo os parâmetros m e n aloque uma matriz de
ordem m x n e retorne um ponteiro para esta matriz alocada. Crie ainda uma função para liberar a
área de memória alocada pela matriz. Finalmente, crie um novo programa (main) que teste/use as
duas funções criadas acima.*/

#include <stdio.h>
#include <stdlib.h>

int **criaMatriz(int m, int n){
    int **matriz;
    int i;
    matriz = malloc(m * sizeof(int*));
    for(i=0;i<m;i++){
        matriz[i] = malloc(n * sizeof(int));
    }
    return matriz;
}
void liberaMatriz(int **matriz, int m){
    int i;
    for(i=0;i<m;i++){
        free(matriz[i]);
    }
    free(matriz);
}
int main(){
    int lin, col, i, k;
    int **mat;

    printf("\nForneça o valor de m :\n");
    scanf("%d",&lin);

    printf("\nForneça o valor de n :\n");
    scanf("%d",&col);

    mat=criaMatriz(lin,col);
    //Preenchendo a matriz
    for(i=0;i<lin;i++){
        for(k=0;k<col;k++){
            printf("\nDigite os elementos da matriz:\n");
            scanf("%d",&mat[i][k]);
        }
        printf("\n");
    }
    //Imprimindo a matriz
    printf("\nMatriz :\n");
     for(i=0;i<lin;i++){
        for(k=0;k<col;k++){
            printf("%d\t",mat[i][k]);
        }
        printf("\n");
    }

    liberaMatriz(mat,lin);
    return 0;
}