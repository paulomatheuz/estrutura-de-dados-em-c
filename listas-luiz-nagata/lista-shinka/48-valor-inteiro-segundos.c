/* Enunciado:
 * Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
 */
#include <stdio.h>

    int main() {
        int segundos_total, horas, minutos, segundos, total_minutos;

        printf("Digite um valor inteiro em segundos: ");
        scanf("%d", &segundos_total);

        segundos = segundos_total % 60;
        
        total_minutos = segundos_total / 60;

        minutos = total_minutos % 60;
        
        horas = total_minutos / 60;

        printf("%d hora(s)\n", horas);
        printf("%d minuto(s)\n", minutos);
        printf("%d segundo(s)\n", segundos);

        return 0;
    }