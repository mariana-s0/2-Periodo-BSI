#include <stdio.h>
#include <stdlib.h>
#include "QUESTAO_03.h"

int main(){
    int h,m,s;
    THora *hora;

    printf("\nForneça a hora :\n");
    scanf("%d",&h);

    printf("\nForneça os minutos :\n");
    scanf("%d",&m);

    printf("\nForneça os segundos :\n");
    scanf("%d",&s);

    hora = alocaHora(h,m,s);


    return 0;
}