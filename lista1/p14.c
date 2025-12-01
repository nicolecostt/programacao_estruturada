#include <stdio.h>

int main() {
    int M, N;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &M, &N);

    while (M > 0 && N > 0) {
        int menor, maior;
        if (M < N) {
            menor = M;
            maior = N;
        } else {
            menor = N;
            maior = M;
        }

        int soma = 0;
        for (int i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
        }
        printf("Soma total: %d\n", soma);

        printf("Digite dois números inteiros (M e N): ");
        scanf("%d %d", &M, &N);
    }

    return 0;
}