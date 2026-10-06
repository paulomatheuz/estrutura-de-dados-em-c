/*
 * Lista Rasen - Questão 15
 * Tema: Estruturas de repetição
 *
 * Exibe os números ímpares de um até N em ordem crescente.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;

    printf("Digite um número inteiro positivo e ímpar: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
