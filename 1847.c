#include <stdio.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);


    if (a > b && b <= c)
        printf(":)\n");

    if (a < b && b >= c)
        printf(":(\n");

    if (a < b && b < c) {

        if (c - b < b - a)
            printf(":(\n");
        else
            printf(":)\n");

    }

    if (a > b && b > c) {

        if (c - b > b - a)
            printf(":)\n");
        else
            printf(":(\n");

    }

    if (a == b) {
        if (c > b)
            printf(":)\n");
        else
            printf(":(\n");
    }

    return 0;
}