#include <stdio.h>

int main() {
    int numero, maior, posicao;

    printf("Digite o numero 1: ");
    scanf("%d", &numero);

    maior = numero;
    posicao = 1;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
            posicao = i;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}