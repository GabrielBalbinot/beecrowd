#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = pow(b, 2) - 4 * a * c;

    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
    }
    else {

        double r1 = (-b + sqrt(delta)) / (2 * a);
        double r2 = (-b - sqrt(delta)) / (2 * a);

        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }

    return 0;
}