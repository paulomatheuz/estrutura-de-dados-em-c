/*
 * Lista Rasen - Questão 29
 * Tema: Estruturas de repetição
 *
 * Calcula cinco termos da série com fatoriais pares.
 */

#include <stdio.h>

int main(void) {
    int termo;
    int i;
    long double soma = 0.0L;

    for (termo = 0; termo < 5; termo++) {
        long double fatorial = 1.0L;

        for (i = 1; i <= 2 * termo; i++) {
            fatorial *= i;
        }

        soma += (long double)termo / fatorial;
    }

    printf("S = %.10Lf\n", soma);

    return 0;
}
