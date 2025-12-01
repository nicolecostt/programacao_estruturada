#include <stdio.h>

int main() {
    int num, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i < 21; i++){
        resultado = i * num;
        printf("%d\n", resultado);
    }
    return 0;
}