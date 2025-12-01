#include <stdio.h>

int main() {
    int a, b;
    int soma_impares = 0;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    for (int i = a + 1; i < b; i++){
        if (i % 2 != 0){
            soma_impares += i;
        }
    }

    printf("Soma dos impares: %d\n", soma_impares);

    return 0;
}