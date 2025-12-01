#include <stdio.h>

int main() {
    double salario, novo_salario, reajuste, percentual;

    printf("Digite o salario atual: ");
    scanf("%lf", &salario);

    if (salario < 1500.00){
        novo_salario = salario + (salario * 0.20);
        reajuste = salario * 0.20;
        percentual = 20;
    } else if (salario >= 1500.00 && salario < 5000.00){
        novo_salario = salario + (salario * 0.15);
        reajuste = salario * 0.15;
        percentual = 15;
    } else {
        novo_salario = salario + (salario * 0.10);
        reajuste = salario * 0.10;
        percentual = 10;
    }

    printf("Novo salario: %.2f\n", novo_salario);
    printf("Valor do reajuste: %.2f\n", reajuste);
    printf("Percentual: %.0f%%\n", percentual);

    return 0;
}