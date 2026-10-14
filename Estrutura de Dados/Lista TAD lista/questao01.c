#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef int TElemento;
typedef struct Nodo { 
    TElemento info; 
    struct Nodo *next;
} TNodo;
typedef struct { 
    TNodo *inicio; 
    TNodo *fim; 
    int tamanho;
} TLista;

typedef TLista* lista;

lista lista_cria(){
    lista li = (lista) malloc (sizeof(lista));
    if(li){
        li->tamanho = 0;
        li->inicio = NULL;
        li->fim = NULL;
    }
    return li;
}
void lista_termina(lista *l){
    TNodo *ptr;
    while((*l)->inicio != NULL){
        ptr = (*l)->inicio;
        (*l)->inicio= (*l)->inicio->next;
        free(ptr);
    }
    free(*l);
    *l = NULL;
}
int lista_insereFinal(lista l, TElemento elem){
    TNodo *ptr;

    ptr= (TNodo*)malloc(sizeof(TNodo));
    if(ptr == NULL)
        return 0;
    ptr->next = NULL;
    if(l->tamanho==0)
        l->inicio = ptr;
    else
        l->fim->next = ptr;
    
    l->fim = ptr;
    l->tamanho++;
    return 1;
}

void mostraLista(lista l){
    TNodo *ptr;
    printf("\nElementos da lista\n");
    ptr=l->inicio;
    while (ptr!=NULL){
        printf("\n%d\n",ptr->info);
        ptr = ptr->next;
    }
    
}
void lista_inverte(lista l){
    TNodo *ptr , *ptrProx , *ptrAntigo;
    if(l->inicio == l->fim)
        return;
    
    ptrAntigo = l->inicio;
    l->inicio = l->fim;
    l->fim - ptrAntigo;
    ptr = ptrAntigo;

    while(ptr != l->inicio){
        ptrProx = ptr->next;
        ptr->next = l->inicio->next;
        l->inicio->next = ptr;
        ptr = ptrProx;
    }
}
int main(){
    
    int tam,i;
    int v[] = {1,2,3,4,5,6};
    lista li;
    li = lista_cria();
    if(li){
         tam = sizeof(v)/sizeof(int);
        for(i=0;i<tam;i++)
            lista_insereFinal(li,v[i]);
        printf("\nConteúdo atual da lista\n");
        mostraLista(li);
        lista_termina(li);
    }

   
    
    return 0;
}