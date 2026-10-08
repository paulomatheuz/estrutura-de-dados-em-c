/*
 * Lista Rasen - Questão 19
 * Tema: Estruturas de repetição
 *
 * Exibe os algarismos de um número entre 100 e 999.
 */

#include <stdio.h>

int main(void) {
    int numero;

    do {
        printf("Digite um número entre 100 e 999: ");
        scanf("%d", &numero);
    } while (numero < 100 || numero > 999);

    printf("Algarismos: %d, %d e %d\n", numero / 100, (numero / 10) % 10, numero % 10);

    return 0;
}
