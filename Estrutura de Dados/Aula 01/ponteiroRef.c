#include <stdio.h>
#include <stdlib.h>
void aloca(int **ptr){

    *ptr=(int*)malloc(sizeof(int));
}
int main(){
    
    int *pt;

    aloca(&pt);

    *pt=200;

    printf("\nValor = %d\n",*pt);

    free(pt);
   
    return 0;
}