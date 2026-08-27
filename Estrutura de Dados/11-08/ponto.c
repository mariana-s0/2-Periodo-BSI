#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h"

struct TPonto {
    float x;
    float y;
};

Ponto criarPonto(float x, float y) {
    Ponto p = (Ponto) malloc(sizeof(struct TPonto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

void terminarPonto(Ponto p) {
    free(p);
}

float getX(Ponto p) {
    return p->x;
}

float getY(Ponto p) {
    return p->y;
}

void setX(Ponto p, float x) {
    p->x = x;
}

void setY(Ponto p, float y) {
    p->y = y;
}

float distanciaPontos(Ponto p1, Ponto p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}
