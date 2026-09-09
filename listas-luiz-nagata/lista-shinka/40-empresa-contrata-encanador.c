/*Enunciado:
 * Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
 * o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser
 * paga, sabendo-se que são descontados 8% para imposto de renda.
 */
#include <stdio.h>

    int main() {
        float dias_trabalhados, quantia_bruta, quantia_liquida, desconto;
        float custo_dia = 30.0;

        printf("Quantos dias foram trabalhados pelo encanador?: ");
        scanf("%f", &dias_trabalhados);

        quantia_bruta = dias_trabalhados * custo_dia;
        desconto = quantia_bruta * (8.0 / 100.0);
        quantia_liquida = quantia_bruta - desconto;

        printf("O valor liquido a ser pago sera: %.2f", quantia_liquida);

        return 0;
    }