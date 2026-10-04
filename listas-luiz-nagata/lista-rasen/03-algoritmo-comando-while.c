/*
 * Lista Rasen - Questão 03
 * Tema: Estruturas de repetição
 *
 * Mostra uma contagem regressiva de 10 até 0 usando while.
 */

#include <stdio.h>

int main(void) {
    int numero = 10;

    while (numero >= 0) {
        printf("%d\n", numero);
        numero--;
    }

    printf("FIM!\n");

    return 0;
}
