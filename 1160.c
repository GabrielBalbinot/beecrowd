#include <stdio.h>

int main() {

    int n, pa, pb, anos = 0;
    float ga, gb;

    scanf("%d", &n);

    while (n--) {

        scanf("%d %d %f %f", &pa, &pb, &ga, &gb);

        while (pa <= pb) {

            if (anos > 100) {
                break;
            }

            pa = pa + pa * ga / 100;
            pb = pb + pb * gb / 100;

            anos++;


        }

        if (anos > 100) {
            printf("Mais de 1 seculo.\n");
        }
        else {
            printf("%d anos.\n", anos);
        }

        anos = 0;

    }

    return 0;
}
