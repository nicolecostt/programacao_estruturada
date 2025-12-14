#include <stdio.h>

void mediaPos(int a, int b, int c, int d, int e, int f, int *qtdPositivos, float *media){
    int soma = 0;
    *qtdPositivos = 0;
    
    if (a > 0){
        soma += a;
        (*qtdPositivos)++;
    }
    if (b > 0){
        soma += b;
        (*qtdPositivos)++;
    }
    if (c > 0){
        soma += c;
        (*qtdPositivos)++;
    }
    if (d > 0){
        soma += d;
        (*qtdPositivos)++;
    }
    if (e > 0){
        soma += e;
        (*qtdPositivos)++;
    }
    if (f > 0){
        soma += f;
        (*qtdPositivos)++;
    }
    
    if (*qtdPositivos > 0){
        *media = (float)soma / *qtdPositivos;
    } else {
        *media = 0;
    }
}

int main(){
    int num1, num2, num3, num4, num5, num6;
    int qtdPositivos;
    float media;
    
    printf("Digite seis numeros: ");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);
    
    mediaPos(num1, num2, num3, num4, num5, num6, &qtdPositivos, &media);
    
    printf("positivos: %d\n", qtdPositivos);
    printf("media dos numeros positivos: %.2f\n", media);

    return 0;
}