#include <stdio.h>
#include "Ponto.h"

int main() {
    Ponto p1,p2;
    float d;
    p1 = criarPonto(2, 3);

    if (p1 != NULL) {
        p2 = criarPonto(4, 6);

        if (p2 != NULL) {

            printf("P1: (%.1f, %.1f)\n", getX(p1), getY(p1));
            printf("P2: (%.1f, %.1f)\n", getX(p2), getY(p2));

            d = distanciaPontos(p1, p2);
            printf("Distancia: %.2f\n", d);

            terminarPonto(p2);
        } else
            printf("Erro: Nao foi possivel alocar o Ponto 2!\n");

        terminarPonto(p1);
    } else {
        printf("Erro: Nao foi possivel alocar o Ponto 1!\n");
    }

    return 0;
}