/*
 * Lista Rasen - Questão 07
 * Tema: Estruturas de repetição
 *
 * Calcula a média de dez números inteiros positivos.
 */

#include <stdio.h>

int main(void) {
    int numero;
    int soma = 0;
    int quantidade = 0;

    while (quantidade < 10) {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            quantidade++;
        }
    }

    printf("Média: %.2f
", soma / 10.0);

    return 0;
}
