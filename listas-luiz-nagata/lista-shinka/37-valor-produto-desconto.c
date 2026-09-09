/* Enunciado:
 * Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
 * em vista que o desconto foi de 12%
 */
#include <stdio.h>

    int main() {
        float valor_produto, desconto, valor_desconto;

        printf("Digite o valor do produto: ");
        scanf("%f", &valor_produto);

        desconto = valor_produto * (12.0 / 100.0);
        valor_desconto = valor_produto - desconto;

        printf("O valor do produto com desconto e de: %.2f", valor_desconto);

        return 0;
    }