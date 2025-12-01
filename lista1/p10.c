#include <stdio.h>
#include <math.h> 

int main() {
    double A, B, C;
    double delta, raiz1, raiz2;
    printf("Digite A, B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    delta = B * B - 4 * A * C;

    if (delta < 0 || A == 0) {
        printf("Impossivel calcular\n");
    } else {
        raiz1 = (-B + sqrt(delta)) / (2 * A);
        raiz2 = (-B - sqrt(delta)) / (2 * A);

        printf("Raiz 1 = %.2f\n", raiz1);
        printf("Raiz 2 = %.2f\n", raiz2);
    }
    return 0;
}