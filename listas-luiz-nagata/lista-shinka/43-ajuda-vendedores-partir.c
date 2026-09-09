/* Enunciado:
 * Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
 * • o total a pagar com desconto de 10%;
 * • o valor de cada parcela, no parcelamento de 3× sem juros;
 * • a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com des-
 * conto)
 * • a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
 */
#include <stdio.h>

    int main() {
        float valor_total, desconto, valor_com_desconto, comissao_a_vista, comissao_parcelada, valor_parcela;

        printf("Digite o valor total: ");
        scanf("%f", &valor_total);

        desconto = valor_total * (10.0 / 100.0);
        valor_com_desconto = valor_total - desconto;
        comissao_a_vista = valor_com_desconto * (5.0 / 100.0);

        valor_parcela =  valor_total / 3;
        comissao_parcelada = valor_total * (5.0 / 100.0);

        printf("Total a pagar com desconto de 10%%: %.2f\n", valor_com_desconto);
        printf("Valor de cada parcela (3x sem juros): %.2f\n",  valor_parcela);
        printf("A comissao do vendedor (venda à vista): %.2f", comissao_a_vista);
        printf("A comissao do vendedor (venda parcelada): %.2f", comissao_parcelada);

        return 0;
    }