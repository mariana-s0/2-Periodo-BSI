#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

struct TConta {
    int numero;
    char titular[100];
    double saldo;
};

Conta criarConta(int numero, char* titular, double saldoInicial){
    Conta c = (Conta) malloc(sizeof(struct TConta));
    
    if(c!=NULL){
        c -> numero = numero;
        strcpy(c -> titular,titular);
        if(saldoInicial>=0){
            c -> saldo = saldoInicial;
        }else
            return NULL; //ERRO
    }else{
         return NULL; //ERRO
    }
    return c; //SUCESSO   

}
void terminarConta(Conta* c){
    free(c);
}
int getNumero(Conta c){
    return c->numero;
}
char* getTitular(Conta c){
    return c->titular;
}
double getSaldo(Conta c){
    return c->saldo;
}
int depositar(Conta c, double valor){
    if(c!=NULL){
        if(valor>0){
            c->saldo += valor;
            return 1; //SUCESSO
        }else{
            return 0; //ERRO
        }
    }return 0; //ERRO
}
int sacar(Conta c, double valor){
    if(c!=NULL){
        if(valor>0){
            if(valor>=c->saldo){
                c->saldo -= valor;
                return 1; //SUCESSO
            }else{
                return 0; //ERRO
            }    
        }else{
            return 0; //ERRO
        }
    }return 0; //ERRO
}
int transferir(Conta origem, Conta destino, double valor){
    if(valor>0){
        if(origem>=valor){
            sacar(origem,valor);
            depositar(destino,valor);
            return 1; //SUCESSO
        }else{
            return 0; //ERRO
        }
        return 1; //SUCESSO
    }else{
        return 0; //ERRO
    }
}
char* toStringConta(Conta c){
    char *str = (char*)malloc(sizeof(char)*150);
    if(str!=NULL){
        snprintf(str,150,"Número = %d | Nome = %s | Saldo = R$ %.2lf",c->numero,c->titular,c->saldo);
    }
    return str;
}
