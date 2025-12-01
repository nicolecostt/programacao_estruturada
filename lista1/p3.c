#include <stdio.h>

int main() {
    double distancia, tempo;
    double vel1 = 60.0; 
    double vel2 = 90.0; 
    double vel_relativa = vel1 + vel2; 

    printf("Digite a distancia entre os carros: ");
    scanf("%lf", &distancia);

    tempo = (distancia / vel_relativa) * 60.0;

    printf("O tempo necessario para os carros se encontrarem: %.2f minutos.\n", tempo);
    return 0;
}