#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

int main(){

    float alturaTp, larguraTp, novaA, novaL;
    TRetangulo *r;


    printf("\nForneça a altura do retângulo :\n");
    scanf("%f",&alturaTp);

    printf("\nForneça a largura do retãngulo :\n");
    scanf("%f",&larguraTp);

    r = alocaRetangulo(alturaTp,larguraTp);

    if(r == NULL){
        printf("\nErro ao criar alocação !!\n");
        return 1;
    }

    printf("\nForneça a nova altura :\n");
    scanf("%f",&novaA);

    alteraAltura(r,novaA);

    printf("\nForneça a nova largura :\n");
    scanf("%f",&novaL);

    alteraLargura(r,novaL);

    imprimeRetangulo(r);

    liberaRetangulo(r);

    return 0;
}