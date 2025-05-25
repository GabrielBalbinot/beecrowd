#include <stdio.h>

int main() {

    float f;
    scanf("%f", &f);

    int valor = f * 100, i = 0;

    int reais[12] = { 10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1 };

    printf("NOTAS:\n");

    while (i <= 5) {

        int notas = valor / reais[i];
        valor %= reais[i];

        printf("%d nota(s) de R$ %.2f\n", notas, reais[i] / 100.00);
        i++;

    }

    printf("MOEDAS:\n");

    while (i < 12) {

        int notas = valor / reais[i];
        valor %= reais[i];

        printf("%d moeda(s) de R$ %.2f\n", notas, reais[i] / 100.00);
        i++;

    }


    return 0;
}
