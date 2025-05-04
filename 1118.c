#include <stdio.h>

int main(void) {

    float notas = 0;
    int continuar = 0;

    do {

        for (int i = 0; i < 2; i++) {

            float nota;
            scanf("%f", &nota);

            if (nota < 0 || nota > 10) {

                printf("nota invalida\n");
                i--;
                continue;

            }

            notas += nota;

        }

        printf("media = %.2f\n", notas / 2);
        notas = 0;
        printf("novo calculo (1-sim 2-nao)\n");

        while (scanf("%d", &continuar)) {

            if (continuar != 1 && continuar != 2) {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
            else {
                break;
            }

        }

    } while (continuar == 1);

    return 0;

}