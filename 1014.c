#include <stdio.h>

int main() {

    float x, y, z = 0.0;

    scanf("%f %f", &x, &y);

    if (x == z && y == z) {
        printf("Origem\n");
    }
    else if (x == z) {
        printf("Eixo Y\n");
    }
    else if (y == z) {
        printf("Eixo X\n");
    }
    else if (x > z && y > z) {
        printf("Q1\n");
    }
    else if (x < z && y > z) {
        printf("Q2\n");
    }
    else if (x < z && y < z) {
        printf("Q3\n");
    }
    else if (x > z && y < z) {
        printf("Q4\n");
    }

    return 0;
}