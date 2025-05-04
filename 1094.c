#include <stdio.h>

int main() {

    int c = 0, r = 0, s = 0, n, qtd;
    char tipo;

    scanf("%d", &n);

    while (n--) {

        scanf("%d %c", &qtd, &tipo);

        if (tipo == 'C') {
            c += qtd;
        }
        else if (tipo == 'R') {
            r += qtd;
        }
        else if (tipo == 'S') {
            s += qtd;
        }

    }

    int total = c + r + s;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (float)c / total * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)r / total * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)s / total * 100);

    return 0;
}