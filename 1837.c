#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    if (a >= 0) {

        printf("%d %d\n", (a / b), (a % b));

    }
    else {

        int n = 0, i = 0;

        while (abs(a) > abs(n)) {

            n += b;

        }

        int q = b < 0 ? n / b : -(n / b);

        int r = a - (b * q);

        printf("%d %d\n", q, r);

    }

    return 0;
}
