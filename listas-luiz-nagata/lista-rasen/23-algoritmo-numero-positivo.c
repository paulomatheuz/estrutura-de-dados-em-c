/*
 * Lista Rasen - Questão 23
 * Tema: Estruturas de repetição
 *
 * Exibe todos os divisores de um número positivo.
 */

#include <stdio.h>

int main(void) {
    int numero;
    int divisor;

    do {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    printf("Divisores de %d:\n", numero);
    for (divisor = 1; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            printf("%d ", divisor);
        }
    }
    printf("\n");

    return 0;
}
