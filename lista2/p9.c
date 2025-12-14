#include <stdio.h>

int somaImpar(int x, int y){
    int soma = 0;
    if (x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    for (int i = x + 1; i < y; i++){
        if (i % 2 != 0){
            soma += i;
        }
    }
    return soma;
}

int main(){
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    int resultado = somaImpar(num1, num2);
    printf("A soma dos numeros impares e: %d\n", resultado);
    
    return 0;
}