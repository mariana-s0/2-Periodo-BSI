#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i,n,*vet;

    printf("\nForneça o número de elementos: \n");
    scanf("%d",&n);

    vet = (int*) malloc(sizeof(int)*n);
    
    if(vet!=NULL){
        for(i=0;i<n;i++){
            *(vet+i)=i*2;
        }

        for(i=0;i<n;i++){
            printf("\n%d\n",vet[i]);
        }
        free(vet);                  
    }else
        printf("\nErro na Alocação\n");
   
    return 0;
}