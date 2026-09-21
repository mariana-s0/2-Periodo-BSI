/*Questão 01
Implemente um TAD Retângulo utilizando ponteiros. Esse TAD deve 
conter uma estrutura de dados com os atributos altura e largura, 
uma função de criação que aloque dinamicamente um retângulo e inicialize 
seus atributos com valores passados como parâmetro, realizando a validação 
]para garantir que sejam valores válidos (positivos). Implemente também uma 
função de destruição que libere a memória alocada. Crie funções setters para 
alterar os valores de altura e largura, incluindo validação dos novos valores 
antes de atribuí-los, e funções getters para acessar esses valores. Além disso, 
desenvolva funções que calculem e retornem o perímetro e a área do retângulo e 
uma função que imprima todas as informações do retângulo, incluindo altura, largura, 
perímetro e área. Por fim, escreva um programa principal que utilize o TAD, criando um 
retângulo, modificando seus atributos por meio dos setters, exibindo os resultados 
na tela e liberando a memória ao final da execução. 
*/

#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

struct TRetangulo{
    float altura;
    float largura;
};

TRetangulo *alocaRetangulo(float altura, float largura){

    TRetangulo *retangulo;
    
    if(altura <= 0  || largura <= 0){
        return NULL;
    }else{
        retangulo = (TRetangulo*)malloc(sizeof(TRetangulo));
        if(retangulo == NULL){
            return NULL;
        }else{
            retangulo->altura = altura;
            retangulo->largura = largura;
        }
    }
    return retangulo;
    
}
void  liberaRetangulo(TRetangulo *retangulo){
    free(retangulo);
}
void alteraAltura(TRetangulo *retangulo, float alturaN){
    if(alturaN > 0){
        retangulo->altura = alturaN;
    }
}
void alteraLargura(TRetangulo *retangulo, float larguraN){
    if(larguraN > 0){
        retangulo->largura = larguraN;
    }
}
float getAltura(TRetangulo *retangulo){
    return retangulo->altura;
}
float getLargura(TRetangulo *retangulo){
    return retangulo->largura;
}
float calculaPerimetro(TRetangulo *retangulo){
    return 2 * ((retangulo->altura) + (retangulo->largura));
}
float calculaArea(TRetangulo *retangulo){
    return (retangulo->altura)*(retangulo->largura); 
}
void imprimeRetangulo(TRetangulo *retangulo){
    
    printf("\nAltura do retangulo = %f\n",retangulo->altura);
    printf("\nLargura do retangulo = %f\n",retangulo->largura);
    printf("\nPerímetro do retangulo = %f\n",calculaPerimetro(retangulo));
    printf("\nÁrea do retangulo = %f\n",calculaArea(retangulo));

}
