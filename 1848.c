#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char str[8];
    int num = 0;

    for (int i = 0; i < 3; i++) {

        while (fgets(str, 8, stdin)) {

            if (strcmp(str, "caw caw") == 0)
                break;

            for (int i = 0; i < 3; i++) {

                if (str[i] == '*') {
                    num += pow(2, 2 - i);
                }

            }

        }

        printf("%d\n", num);
        num = 0;

    }

    return 0;
}