/* Enunciado:
 * Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros:
 * Dia, Mês e Ano. Teste a validade desta data para saber se estaé uma data válida. Teste
 * se o dia fornecido é um dia válido: dia > 0, dia≤ 28 para o mês de fevereiro (29 se o
 * ano for bissexto), dia≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros
 * meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano≤
 * ano atual (use uma constante definida com o valor igual a 2008). Imprimir: “data válida”
 * ou “data inválida” no final da execução do programa.
 */
#include <stdio.h>

    int main() {
        int dia_nasc, mes_nasc, ano_nasc;
        int dias_no_mes;
        int ano_atual = 2008;

        printf("Digite o dia, mes e ano de nascimento (XX / XX / XXXX): ");
        scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

        if (mes_nasc < 1 || mes_nasc > 12) {
            printf("Data invalida!\n");
            return 0;
        }
        
        if (mes_nasc == 1 || mes_nasc == 3 || mes_nasc == 5 || mes_nasc == 7 ||
        mes_nasc == 8 || mes_nasc == 10 || mes_nasc == 12) {
            dias_no_mes = 31;

        } else if (mes_nasc == 4 || mes_nasc == 6 || mes_nasc == 9 || mes_nasc == 11) {

            dias_no_mes = 30;

        // dias_no_mes (fevereiro)
        } else {
            if ((ano_nasc % 4 == 0 && ano_nasc % 100 != 0) || ano_nasc % 400 == 0) {
                dias_no_mes = 29;
            } else {
                dias_no_mes = 28;
            }
        }

        if ((dia_nasc >= 1 && dia_nasc <= dias_no_mes) && ano_nasc <= ano_atual) {
            printf("Data valida!\n");
        } else {
            printf("Data invalida!\n");
        }

        return 0;
    }
