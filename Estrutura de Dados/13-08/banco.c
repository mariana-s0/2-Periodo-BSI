#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
#include "banco.h"

struct TBanco {
    Conta *contas;
    int quantidade;
    int capacidade;
};
Banco criarBanco(int capacidadeInicial){
    Banco b = NULL;
    if(capacidadeInicial<=0){
         return NULL;
    }else{
        Banco b=(Banco)malloc(sizeof(struct TBanco));
        if(b!=NULL){
            b->contas = (Conta*)malloc(sizeof(Conta)*capacidadeInicial);
            if(b->contas!=NULL){
                b -> quantidade = 0;
                b -> capacidade = capacidadeInicial;
            }
            else{
                free(b);
                b = NULL;
            }
        }
    }
    return b;
}
int adicionarConta(Banco b, Conta c){
    int i;
    Conta *ptrAux;
    if(b==NULL || c==NULL){
        return 0;
    }
    //Verificando se existe conta cadastrada com o mesmo número com o mesmo numero q a conta c
    for(i=0;i<b->quantidade;i++){
        if(getNumero(b->contas[i])==getNumero(c))
            return 0;
    }
    //Verificando se preciso expandir o vetor
    if(b->quantidade==b->capacidade){
        ptrAux=(Conta*)realloc(b->contas,b->capacidade*2*sizeof(Conta));
        if(ptrAux!=NULL){
            b->contas = ptrAux ;
            b->capacidade= b->capacidade*2;
        }else{
            return 0;
        }
    }
    b->contas[b->quantidade]=c;
    b->quantidade++;
    return 1;
}
Conta buscarContaPorNumero(Banco b, int numero){
    int i;
    if(b==NULL)
        return NULL;
        for(i=0;i<b->quantidade;i++){
            if(getNumero(b->contas[i])==numero)
                return b->contas[i];
        }
        return NULL;
}
getNumero(conta){

}
int removerContaPorNumero(Banco b, int numero){

}
int getQuantidadeContas(Banco b){

}
int getCapacidadeBanco(Banco b){

}
Conta getContaPorIndice(Banco b, int indice){

}
void terminarBanco(Banco b){
    int i;
    if(b!=NULL){
       for(i=0;i<b->quantidade;i++){
        terminarConta(b->contas[i]);
       }
       free(b->contas);
       free(b);
    }

}
terminarConta(conta){

}