#ifndef LISTA_H
#define LISTA_H

typedef int TElemento;
typedef struct Nodo 
{ TElemento info; struct 
    Nodo *next;
} TNodo;
typedef struct { TNodo 
    *inicio; TNodo *fim; 
    int tamanho;
} TLista;
typedef TLista* lista;

#endif
/*Os campos 'inicio' e 'fim' do tipo TLista apontam, respectivamente, para o primeiro e último nó 
da lista. O campo 'next' do último nó da lista aponta para NULL.
Implemente as seguintes funções:
a) Inverter a ordem dos elementos de uma lista linear, movimentando apenas os
apontadores.
b) Verificar se uma lista está ordenada.
c) Inserir um elemento em uma posição específica da lista.
d) Excluir um elemento de uma posição específica da lista.
e) Verificar a existência de um elemento com determinada chave em uma lista ordenada,
retornando um ponteiro para o nó ou NULL.
f) Implementar a função lista* intercala(lista l1, lista l2) que retorne uma lista ordenada
resultante da intercalação de l1 e l2.
g) Remover todos os nós cujo campo info seja igual a um determinado valor.
h) Mover o menor elemento da lista para o início, manipulando apenas apontadores.*/