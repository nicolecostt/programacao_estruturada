#include <stdio.h>

int somaDigitos(int n) {
    if (n < 10) {
        return n;
    }

    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    int resultado = somaDigitos(numero);
    
    printf("A soma e: %d\n", resultado);
    
    return 0;
}
