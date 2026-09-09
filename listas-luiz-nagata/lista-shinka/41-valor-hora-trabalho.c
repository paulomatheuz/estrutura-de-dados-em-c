/* Enunciado:
 * Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
 * trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
 * o valor calculado.
 */
#include <stdio.h>

    int main() {
        float hora_trabalho, num_horas_mes, salario_bruto, bonus, salario_liquido;

        printf("Digite o valor da hora de trabalho em reais: ");
        scanf("%f", &hora_trabalho);
        printf("Digite a quantidade de horas trabalhadas no mês: ");
        scanf("%f", &num_horas_mes);

        salario_bruto = hora_trabalho * num_horas_mes;
        bonus = salario_bruto * (10.0 / 100.0);
        salario_liquido = salario_bruto + bonus;

        printf("O valor a ser pago ao funcionario e de: %.2f", salario_liquido);

        return 0;
    }