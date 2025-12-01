#include <stdio.h>

int main() {
    int a, b, c, maior, menor, meio;

    printf("Digite tres numeros inteiros distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        maior = a;
        if (b > c) {
            meio = b;
            menor = c;
        } else {
            meio = c;
            menor = b;
        }
    } else if (b > a && b > c) {
        maior = b;
        if (a > c) {
            meio = a;
            menor = c;
        } else {
            meio = c;
            menor = a;
        }
    } else {
        maior = c;
        if (a > b) {
            meio = a;
            menor = b;
        } else {
            meio = b;
            menor = a;
        }
    }
    printf(" %d %d %d\n", menor, meio, maior);
    printf("\n");
    printf(" %d %d %d\n", a, b, c);

    return 0;
}