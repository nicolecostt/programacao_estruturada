#include <stdio.h>

int main() {
    int distancia, litros;
    float consumo;

    printf("Digite a distancia percorrida e a quantidade de litros consumidos: ");
    scanf("%d %d", &distancia, &litros);

    consumo = (float)distancia / litros;

    printf("%.3f km/l\n", consumo);

    return 0;
}