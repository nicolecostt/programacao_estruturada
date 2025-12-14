#include <stdio.h>

int passos(int n){
    if (n == 1) {
        return 0;
    }
    
    if (n % 2 == 0) {
        return 1 + passos(n / 2);
    }
    else {
        return 1 + passos(n - 1);
    }
}

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    int resultado = passos(numero);
    
    printf("Numero de passos: %d\n", resultado);
    
    return 0;
}