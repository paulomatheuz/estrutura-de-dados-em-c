/*
 * Lista Rasen - Questão 31
 * Tema: Estruturas de repetição
 *
 * Calcula a soma da série S = 1/1 + 3/2 + ... + 99/50.
 */

#include <stdio.h>

int main(void) {
    double soma = 0.0;
    int denominador;

    for (denominador = 1; denominador <= 50; denominador++) {
        soma += (double)(2 * denominador - 1) / denominador;
    }

    printf("S = %.2f\n", soma);
    return 0;
}
