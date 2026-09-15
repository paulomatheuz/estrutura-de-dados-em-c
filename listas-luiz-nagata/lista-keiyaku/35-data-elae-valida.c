/* Enunciado:
 * Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12,
 * e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28
 * dias em anos não bissextos.
 */
#include <stdio.h>

    int main() {
        int dia, mes, ano;
        int diasNoMes;

        printf("Digite uma data (Dia Mes Ano): ");
        scanf("%d %d %d", &dia, &mes, &ano);

        if (mes < 1 || mes > 12) {
            printf("Data invalida!\n");
            return 0;
        }

        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
            mes == 8 || mes == 10 || mes == 12) {

            diasNoMes = 31;

        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {

            diasNoMes = 30;

        } else {

            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                diasNoMes = 29;
            } else {
                diasNoMes = 28;
            }
        }

        if (dia >= 1 && dia <= diasNoMes) {
            printf("Data valida!\n");
        } else {
            printf("Data invalida!\n");
        }

        return 0;
    }
