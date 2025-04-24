#include <stdio.h>

int main() {
    int n, i, picos;

    while (scanf("%d", &n)) {

        if (n == 0)
            break;

        picos = 0;
        int arr[n];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        for (i = 1; i < n - 1; i++) {
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
                picos++;
            else if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                picos++;
        }

        if (arr[n - 1] > arr[n - 2] && arr[n - 1] > arr[0])
            picos++;
        else if (arr[n - 1] < arr[n - 2] && arr[n - 1] < arr[0])
            picos++;

        if (arr[0] > arr[1] && arr[0] > arr[n - 1])
            picos++;
        else if (arr[0] < arr[1] && arr[0] < arr[n - 1])
            picos++;

        printf("%d\n", picos);
    }


    return 0;
}