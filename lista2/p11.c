#include <stdio.h>

void reduz(int *a, int *b){
    int operacoes = 0;
    while (*a != *b){
        if (*a > *b){
            *a = *a - *b;
            operacoes++;
        }
        else if (*b > *a){
            *b = *b - *a;
            operacoes++;
        }
    }
    printf("O numero de operacoes foi: %d", operacoes);
}

int main(){
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    reduz(&num1, &num2);
    return 0;
}
