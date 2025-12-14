#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k) {
    int soma = 0;
    
    for (int i = inicio; i <= fim; i++) {
        if (i % k == 0) {
            soma += i;
        }
    }
    
    return soma;
}

int main() {
    int inicio, fim, k;
    
    printf("Digite o inicio: ");
    scanf("%d", &inicio);
    
    printf("Digite o fim: ");
    scanf("%d", &fim);
    
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    
    int resultado = somaMultiplos(inicio, fim, k);
    
    printf("A soma dos multiplos e: %d\n", resultado);
    
    return 0;
}