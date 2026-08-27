#ifndef BANCO_H
#define BANCO_H
typedef struct TBanco *Banco;
Banco criarBanco(int capacidadeInicial);
int adicionarConta(Banco b, Conta c);
getNumero(c);
Conta buscarContaPorNumero(Banco b, int numero);
getNumero(conta);
int removerContaPorNumero(Banco b, int numero);
int getQuantidadeContas(Banco b);
int getCapacidadeBanco(Banco b);
Conta getContaPorIndice(Banco b, int indice);
void terminarBanco(Banco *b);
terminarConta(conta);
#endif
