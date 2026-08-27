#ifndef CONTA_H
#define CONTA_H

typedef struct TConta *Conta;
Conta criarConta(int numero, char* titular, double saldoInicial);
void terminarConta(Conta* c);
int getNumero(Conta c);
char* getTitular(Conta c);
double getSaldo(Conta c);
int depositar(Conta c, double valor);
int sacar(Conta C, double valor);
int transferir(Conta origem, Conta destino, double valor);
char* toStringConta(Conta c);

#endif