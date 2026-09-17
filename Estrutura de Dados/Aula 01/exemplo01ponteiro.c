#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i,*ptr1,*ptr2;

    ptr1 = (int*) malloc(sizeof(int));
    
    if(ptr1!=NULL){
        *ptr1=200;

        printf("\nValor armazenado na região de memória alocada = %d\n",*ptr1);
        printf("\nEndereço do primeiro byte da memória alocada = %p\n",ptr1);
        printf("\nEndereço do primeiro byte da memória alocada  = %p\n",ptr2);

        free(ptr1);
    }else
        printf("\nErro na Alocação\n");
   
    return 0;
}