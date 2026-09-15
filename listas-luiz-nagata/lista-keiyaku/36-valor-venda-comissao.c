/* Enunciado:
 * Escreva um programa que, dado o valor da venda mensal, imprima a comissão paga ao vendedor:
 * Venda ≥ R$ 100.000,00: R$ 700,00 + 16% das vendas.
-* Venda ≥ R$ 80.000,00 e < R$ 100.000,00: R$ 650,00 + 14%.
 * Venda ≥ R$ 60.000,00 e < R$ 80.000,00: R$ 600,00 + 14%.
 * Venda ≥ R$ 40.000,00 e < R$ 60.000,00: R$ 550,00 + 14%.
 * Venda ≥ R$ 20.000,00 e < R$ 40.000,00: R$ 500,00 + 14%.
 * Venda < R$ 20.000,00: R$ 400,00 + 14%.
 */
#include <stdio.h>

    int main() {
        float venda_mensal, comissao, porcentagem;

        printf("Digite o valor da venda mensal: ");
        scanf("%f", &venda_mensal);

        if (venda_mensal >= 100000.00) {
            porcentagem = venda_mensal * (16.0 / 100.0);
            comissao = 700.00 + porcentagem;
            printf("Sua comissão é de: %f", comissao);
        }
        else if (venda_mensal >= 80000.00) {
            porcentagem = venda_mensal * (14.0 / 100.0);
            comissao = 650.00 + porcentagem;
            printf("SUa comissão é de: %f", comissao);
        }
        else if (venda_mensal >= 60000.00) {
            porcentagem = venda_mensal * (14.0 / 100.0);
            comissao = 600.00 + porcentagem;
            printf("Sua comissão é de: %f", comissao);
        }
        else if (venda_mensal >= 40000.00) {
            porcentagem = venda_mensal * (14.0 / 100.0);
            comissao = 550.00 + porcentagem;
            printf("Sua comissão é de: %f", comissao);
        }
        else if (venda_mensal >= 20000.00) {
            porcentagem = venda_mensal * (14.0 / 100.0);
            comissao = 500.00 + porcentagem;
            printf("Sua comissão é de: %f", comissao);
        }
        else {
            porcentagem = venda_mensal * (14.0 / 100.0);
            comissao = 400.00 + porcentagem;
            printf("Sua comissão é de: %f", comissao);
        }

        return 0;
    }
