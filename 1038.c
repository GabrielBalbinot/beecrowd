#include <stdio.h>

int main() {

    float produtos[5] = { 4.0, 4.5, 5.0, 2.0, 1.5 };

    int cod, qtd;

    scanf("%d %d", &cod, &qtd);

    float total = produtos[cod - 1] * qtd;

    printf("Total: R$ %.2f\n", total);

    return 0;
}   