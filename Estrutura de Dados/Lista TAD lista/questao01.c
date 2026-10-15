#include <stdio.h>
#include <stdlib.h>

typedef int TElemento;
typedef struct Nodo{ 
    TElemento info; struct
    Nodo *next;
} TNodo;

typedef struct { 
    TNodo *inicio; 
    TNodo *fim;
    int tamanho;
} TLista;

typedef TLista* lista;

lista lista_cria(){
    lista l = (lista)malloc(sizeof(TLista));
    if(l){
        l->tamanho = 0;
        l->inicio = NULL;
        l->fim = NULL;
    }
    return l;
}

void lista_termina(lista *l){
    TNodo *ptr;
    while((*l)->inicio){
        ptr = (*l)->inicio;
        (*l)->inicio = (*l)->inicio->next;
        free(ptr);
    }
    free(*l);
    *l=NULL;
    
}

int lista_insereFinal(lista l, TElemento elem){
    TNodo * ptr;
    
    ptr = (TNodo*)malloc(sizeof(TNodo));
    
    if (ptr == NULL)
       return 0;
    ptr->next = NULL;
    ptr->info = elem;
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
    
    ptr=l->inicio;
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr= ptr->next;
    }
}
void inverteLista(lista l){
    TNodo *ptr,*ptrProximo,*inicioAntigo;
    
    if (l->inicio == l->fim)
        return;
    
    inicioAntigo = l->inicio;
    l->inicio = l->fim;
    l->fim = inicioAntigo;
    
    ptr = inicioAntigo;
    while(ptr != l->inicio){
        ptrProximo = ptr->next;
        ptr->next = l->inicio->next;
        l->inicio->next = ptr;
        ptr = ptrProximo;
    }
}
void lista_removeOcorrencias(lista l, TElemento chave){
    TNodo *ptr, *ptrAnt;
    
    ptr = l->inicio;
    while(ptr!=NULL){
        if(ptr->info == chave){
            //verificando se o nodo a ser removido é o inicio
            if(ptr==l->inicio)
                l->inicio = l->inicio->next;
            else
                if(ptr==l->fim){
                    l->fim = ptrAnt;
                    l->fim->next = NULL;
                }
                else
                    ptrAnt->next = ptr->next;
            free(ptr);
            l->tamanho--;
            ptr = ptrAnt->next;
            
        }
        else{
            ptrAnt = ptr;
            ptr=ptr->next;
        }
    }
    
}
void moverMenor(lista l){
    TNodo *menor , *antMenor, *ant, *atual;

    
    if(l->inicio==NULL || l->inicio==l->fim)
        return;
    
    menor=l->inicio;
    antMenor=NULL;
    ant=l->inicio;
    atual=l->inicio->next;

    while(atual!=NULL){
        if(atual->info < menor->info){
            menor = atual;
            atual = atual->next;
        }
    }
    if(menor==l->inicio)
        return;

    antMenor->next = menor->next;
    
    if(menor=l->fim)
        l->fim=antMenor;

    menor->next = l->inicio;
    l->inicio = menor;
}
int main(){
    int tam,i;
    int v[] = {1,2,5,5,3,4,5,6};
    lista li;
    li = lista_cria();
    if(li){
        tam = sizeof(v)/sizeof(int);
        
        for(i=0; i<tam;i++)
            lista_insereFinal(li,v[i]);
        
        printf("\nConteúdo atual da lista\n");
        mostraLista(li);
        inverteLista(li);
        printf("\nLista Apos Inversao\n");
        mostraLista(li);
        lista_removeOcorrencias(li,5);
        printf("\nLista Após Remoções\n");
        mostraLista(li);
        lista_termina(&li);
        
    }    
    return 0;
}