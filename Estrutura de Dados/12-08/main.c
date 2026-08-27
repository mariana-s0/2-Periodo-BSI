
#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
#include "banco.h"


int main(){
    Banco b= NULL;
    Conta c1,c2,c3,cAux;
    b = criarBanco(3);
    if(b!=NULL){
        c1 = criarConta(10,"Maluzinha",3000);
        c2 = criarConta(20,"PH",5000);
        c3 = criarConta(30,"Amandinha",6000);
        adicionarConta(b,c1);
        adicionarConta(b,c2);
        cAux=buscarContaPorNumero(b,20);
        if(cAux!=NULL){
            printf("\nNome = %s\n",getTitular(cAux));
        }else{
            printf("\nConta inexistente\n");
        }
        terminarBanco(&b);
    }
    return 0;
}