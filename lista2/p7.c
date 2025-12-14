#include <stdio.h>

int inverte(int n, int acumulador) {
    if (n == 0) {
        return acumulador;
    }
    acumulador = acumulador * 10 + (n % 10);
    return inverte(n / 10, acumulador);
}

int ehPalindromo(int n) {
    return n == inverte(n, 0);
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (ehPalindromo(num)) {
        printf("%d e um palindromo\n", num);
    } else {
        printf("%d nao e um palindromo\n", num);
    }
}