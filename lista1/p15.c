#include <stdio.h>

int main() {
    int N;

    printf("Digite o numero de pares: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        double X, Y;
        printf("Digite os valores X e Y: ");
        scanf("%lf %lf", &X, &Y);

        if (Y == 0){
            printf("divisao impossivel\n");
        } else {
            double resultado = X / Y;
            printf("%.1f\n", resultado);
        }
    }
    return 0;
}