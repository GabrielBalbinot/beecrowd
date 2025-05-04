#include <stdio.h>

int main() {

    int m, n, sum = 0;

    while (scanf("%d %d", &m, &n)) {

        if (m <= 0 || n <= 0) break;

        if (n < m) {

            int temp = m;
            m = n;
            n = temp;

        }

        for (int i = m; i <= n; i++) {

            printf("%d ", i);
            sum += i;

        }

        printf("Sum=%d\n", sum);
        sum = 0;

    }

    return 0;
}