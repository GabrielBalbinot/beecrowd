#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int arr[3] = { a, b, c };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}