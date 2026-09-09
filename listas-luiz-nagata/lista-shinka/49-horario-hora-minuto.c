/* Enunciado:
 * Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em
 * segundos, de uma experiência biológica. O programa deve resultar com o novo horário
 * (hora, minuto e segundo) do termino da mesma.
 */
#include <stdio.h>

    int main() {
        int hora, minuto, segundo, duracao;
        int total, horas, minutos, segundos;

        printf("Hora de inicio: ");
        scanf("%d", &hora);
        printf("Minuto de inicio: ");
        scanf("%d", &minuto);
        printf("Segundo de inicio: ");
        scanf("%d", &segundo);
        printf("Duracao em segundos: ");
        scanf("%d", &duracao);

        total = hora * 3600 + minuto * 60 + segundo + duracao;
        total %= 24 * 3600;

        horas = total / 3600;
        total %= 3600;
        minutos = total / 60;
        segundos = total % 60;

        printf("Horario de termino: %02d:%02d:%02d\n", horas, minutos, segundos);
        
        return 0;
    }