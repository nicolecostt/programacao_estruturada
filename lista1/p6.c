#include <stdio.h>

int main() {
    double x, y;

    printf("Coordenada X: ");
    scanf("%lf", &x);
    printf("Coordenada Y: ");
    scanf("%lf", &y);

    if (x == 0 && y == 0) {
        printf("origem\n");
    } else if (x == 0) {
        printf("eixo y\n");
    } else if (y == 0) {
        printf("eixo x\n");
    } else if (x > 0 && y > 0) {
        printf("primeiro quadrante\n");
    } else if (x < 0 && y > 0) {
        printf("segundo quadrante\n");
    } else if (x < 0 && y < 0) {
        printf("terceiro quadrante\n");
    } else {
        printf("quarto quadrante\n");
    }

    return 0;
}