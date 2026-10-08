/*
 * Lista Rasen - Questão 28
 * Tema: Estruturas de repetição
 *
 * Calcula E pela série de fatoriais até N.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;
    double fatorial = 1.0;
    double e = 1.0;

    do {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
        e += 1.0 / fatorial;
    }

    printf("E = %.10f\n", e);

    return 0;
}
