#include <stdio.h>

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int duracao_horas, duracao_minutos;

    printf("Digite a hora e minuto de inicio do jogo: ");
    scanf("%d %d", &hora_inicial, &minuto_inicial);
    printf("Digite a hora e minuto de termino do jogo: ");
    scanf("%d %d", &hora_final, &minuto_final);

    int inicio_total_minutos = hora_inicial * 60 + minuto_inicial;
    int final_total_minutos = hora_final * 60 + minuto_final;

    if (final_total_minutos < inicio_total_minutos) {
        final_total_minutos += 24 * 60;
    }

    int duracao_total_minutos = final_total_minutos - inicio_total_minutos;
    duracao_horas = duracao_total_minutos / 60;
    duracao_minutos = duracao_total_minutos % 60;

    printf("A duração total do jogo foi de %d horas e %d minutos.\n", duracao_horas, duracao_minutos);

    return 0;
}