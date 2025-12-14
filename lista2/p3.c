#include <stdio.h>

int somaDiv(int n, int d) {
    if (d >= n) {
        return 0;
    }
    if (n % d == 0) {
        return d + somaDiv(n, d + 1);
    }
    else {
        return somaDiv(n, d + 1);
    }
}

int perfeito(int n) {
    return somaDiv(n, 1) == n;
}

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (perfeito(numero)) {
        printf("%d e um numero perfeito\n", numero);
    } else {
        printf("%d nao e um numero perfeito\n", numero);
    }
    
    return 0;
}