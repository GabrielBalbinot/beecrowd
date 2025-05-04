#include <stdio.h>

int main() {

    int h1, m1, h2, m2;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int x = h1 * 60 + m1;
    int y = h2 * 60 + m2;

    int minutosTotais;

    if (x > y) {
        minutosTotais = 24 * 60 - x + y;
    }
    else if (y > x) {
        minutosTotais = y - x;
    }
    else {
        minutosTotais = 24 * 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", minutosTotais / 60, minutosTotais % 60);

    return 0;
}