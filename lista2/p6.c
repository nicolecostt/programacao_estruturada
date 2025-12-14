#include <stdio.h>

int somaDivisores(int n, int d){
    if (d >= n) {
        return 0;
    }
    if (n % d == 0) {
        return d + somaDivisores(n, d + 1);
    }
    else {
        return somaDivisores(n, d + 1);
    }
}

int amigos(int a, int b){
    return (somaDivisores(a, 1) == b) && (somaDivisores(b, 1) == a);
}

int main() {
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if (amigos(num1, num2)) {
        printf("%d e %d sao numeros amigos\n", num1, num2);
    } else {
        printf("%d e %d nao sao numeros amigos\n", num1, num2);
    }
    return 0;
}