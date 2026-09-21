/*Questão 03 
Implemente um TAD Hora utilizando ponteiros para representar uma hora específica do dia,
armazenando horas, minutos e segundos como inteiros. O TAD deve incluir uma função de 
criação para alocar dinamicamente uma hora e inicializar seus valores, realizando 
validação para garantir que cada campo seja válido e, em caso de valores inválidos, 
atribuindo zero, e uma função de destruição para liberar a memória alocada. Além disso, 
implemente funções setters para alterar cada campo da hora, realizando validação dos 
valores antes de atribuí-los, e funções getters para acessar os valores de horas, minutos 
e segundos. O TAD deve também conter uma função para avançar o tempo em uma quantidade de 
segundos especificada, considerando sempre o intervalo de um dia, uma função para comparar 
dois horários, retornando verdadeiro se forem iguais e falso caso contrário, e uma função 
para retornar a hora no formato h:m:s. Adicionalmente, implemente funções inc e dec para 
respectivamente aumentar ou diminuir a hora em um segundo, ajustando minutos e horas conforme 
necessário. Por fim, escreva um programa que utilize e teste todas as operações do TAD Hora.
*/

#include <stdio.h>
#include <stdlib.h>
#include "QUESTAO_03.h"

struct THora{
    int hora;
    int minuto;
    int segundo;
};

THora *alocaHora(int hora, int minuto, int segundo){
    THora *h;

    h = malloc(sizeof(THora));
    if(h == NULL){
        return NULL;
    }
        if(hora >= 0 && hora <= 23){
            h->hora = hora;
        }else{
            h->hora = 0 ;
        }if(minuto >= 0 && minuto <= 59){
            h->minuto = minuto;
        }else{
            h->minuto = 0;
        } 
        if(segundo >= 0 && segundo <= 59){
        h->segundo = segundo;
        }else{
            h->segundo = 0;
        }
    
    return h;
}
void liberaHora(THora *hora){
    free(hora);
}
void setHora(THora *hora, int horaN){
    if(horaN >= 0 && horaN <=23){
        hora->hora = horaN;
    }
}
void setMinuto(THora *hora, int minutoN){
    if(minutoN >=0 && minutoN <=59){
        hora->minuto = minutoN;
    }
}
void setSegundo(THora *hora, int segundoN){
    if(segundoN >=0 && segundoN <=59){
        hora->segundo = segundoN;
    }
}
int getHora(THora *hora){
    return hora->hora;
}
int getMinuto(THora *hora){
    return hora->minuto;
}
int getSegundo(THora *hora){
    return hora->segundo;
}
void avancaTp(){

}
int comparaHorario(){

}
void retornaHorario(){
    
}
