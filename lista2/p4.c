#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max) {
    *min = a;
    *max = a;

    if (b < *min) {
        *min = b;
    }
    if (b > *max) {
        *max = b;
    }

    if (c < *min) {
        *min = c;
    }
    if (c > *max) {
        *max = c;
    }
}

int main() {
    int a, b, c, minimo, maximo;
    
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    minMax(a, b, c, &minimo, &maximo);
    
    printf("Minimo: %d\n", minimo);
    printf("Maximo: %d\n", maximo);
    
    return 0;
}