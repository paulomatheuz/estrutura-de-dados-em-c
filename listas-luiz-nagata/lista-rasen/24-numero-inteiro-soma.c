/*
 * Lista Rasen - Questão 24
 * Tema: Estruturas de repetição
 *
 * Calcula a soma dos divisores próprios de um número.
 */

#include <stdio.h>

int main(void) {
    int numero;
    int divisor;
    int soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    for (divisor = 1; divisor < numero; divisor++) {
        if (numero % divisor == 0) {
            soma += divisor;
        }
    }

    printf("Soma dos divisores próprios: %d\n", soma);

    return 0;
}
