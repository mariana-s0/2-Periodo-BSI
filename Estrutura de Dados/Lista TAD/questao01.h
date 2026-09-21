#ifndef QUESTAO_01
#define QUESTAO_01
typedef struct TRetangulo TRetangulo;

TRetangulo *alocaRetangulo(float altura, float largura);

void liberaRetangulo(TRetangulo *retangulo);

void alteraAltura(TRetangulo *retangulo, float alturaN);

void alteraLargura(TRetangulo *retangulo, float larguraN);

float getAltura(TRetangulo *retangulo);

float getLargura(TRetangulo *retangulo);

float calculaPerimetro(TRetangulo *retangulo);

float calculaArea(TRetangulo *retangulo);

void imprimeRetangulo(TRetangulo *retangulo);
#endif