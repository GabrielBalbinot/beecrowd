#include <stdio.h>
#include <stdlib.h>

int main() {

    int x1, y1, x2, y2;

    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2)) {

        if (x1 == 0) break;

        if (x1 == x2 && y1 == y2) {
            printf("%d\n", 0);
        }
        else if (x1 == x2) {
            printf("%d\n", 1);
        }
        else if (y1 == y2) {
            printf("%d\n", 1);
        }
        else if (abs(x1 - x2) == abs(y1 - y2)) {
            printf("%d\n", 1);
        }
        else {
            printf("%d\n", 2);
        }
    }

    return 0;
}