
#include <stdio.h>
//recursão crescente
int somaNumeros(int n){
    if(n==1){
        return 1;
    }else{
        return n + somaNumeros(n-1);
    }
}
//recursão calda
int somaNumerosCalda(int n,int valor){
    if(n==1){
        return valor + 1;
    }else{
        return somaNumerosCalda(n-1,valor + n);
    }
}
void maiorMenor(int *v,int tamanho,int *maior,int *menor){
    if(tamanho==1){
        *maior=v[0];
        *menor=v[0];
    }else{
        maiorMenor(v,tamanho-1,maior,menor);
        if(v[tamanho-1]>*maior){
            *maior=v[tamanho-1];
        }else{
            if(v[tamanho-1]<*menor){
                *menor=v[tamanho-1];
            }
        }
    }
}
int main() {
    int ma,me,v[]={10,20,15,8};

    printf("\nSoma dos 10 primeiros inteiros positivos = %d\n",somaNumeros(10));
    printf("\nSoma dos 4 primeiros inteiros positivos = %d\n",somaNumerosCalda(4,0));
    maiorMenor(v,4,&ma,&me);

    return 0;
}