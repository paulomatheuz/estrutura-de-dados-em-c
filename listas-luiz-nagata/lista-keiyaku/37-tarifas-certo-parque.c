/* Enunciado:
 * As tarifas de um estacionamento são:
 * 1ª e 2ª hora: R$ 1,00 cada.
 * 3ª e 4ª hora: R$ 1,40 cada.
 * 5ª hora em diante: R$ 2,00 cada.
 * Leia hora e minuto de chegada, depois hora e minuto de saída. A duração será no máximo 24 horas; se a hora de saída for menor que a de chegada, a saída ocorreu no dia seguinte.
 * O total de horas cobradas deve ser arredondado para cima: por exemplo, 61 minutos correspondem a 2 horas. Mostre o valor a pagar.
 */
#include <stdio.h>

int main(void) {
    int hora_chegada, minuto_chegada;
    int hora_saida, minuto_saida;
    int chegada_min, saida_min, duracao_min, horas_cobradas;
    double valor_total;

    printf("Digite a hora e o minuto da chegada: ");
    scanf("%d %d", &hora_chegada, &minuto_chegada);

    printf("Digite a hora e o minuto da saida: ");
    scanf("%d %d", &hora_saida, &minuto_saida);

    chegada_min = hora_chegada * 60 + minuto_chegada;
    saida_min = hora_saida * 60 + minuto_saida;

    if (saida_min < chegada_min) {
        saida_min += 24 * 60;
    }

    duracao_min = saida_min - chegada_min;
    horas_cobradas = (duracao_min + 59) / 60;

    if (horas_cobradas <= 2) {
        valor_total = horas_cobradas * 1.00;
    } else if (horas_cobradas <= 4) {
        valor_total = 2.00 + (horas_cobradas - 2) * 1.40;
    } else {
        valor_total = 2.00 + 2.80 + (horas_cobradas - 4) * 2.00;
    }

    printf("Valor a pagar: R$ %.2f\n", valor_total);
    return 0;
}
