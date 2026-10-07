/*
 * Lista Rasen - Questão 16
 * Tema: Estruturas de repetição
 *
 * Exibe os números ímpares de N até um em ordem decrescente.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;

    printf("Digite um número inteiro positivo e ímpar: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i -= 2) {
        printf("%d
", i);
    }

    return 0;
}
