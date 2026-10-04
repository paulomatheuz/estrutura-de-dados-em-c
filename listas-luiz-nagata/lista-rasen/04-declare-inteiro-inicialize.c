/*
 * Lista Rasen - Questão 04
 * Tema: Estruturas de repetição
 *
 * Incrementa um valor de 0 até 100000 de mil em mil.
 */

#include <stdio.h>

int main(void) {
    int valor = 0;

    while (valor <= 100000) {
        printf("%d\n", valor);
        valor += 1000;
    }

    return 0;
}
