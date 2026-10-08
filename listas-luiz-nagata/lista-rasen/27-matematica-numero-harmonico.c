/*
 * Lista Rasen - Questão 27
 * Tema: Estruturas de repetição
 *
 * Calcula o número harmônico H(n).
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;
    double harmonico = 0.0;

    do {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        harmonico += 1.0 / i;
    }

    printf("H(%d) = %.6f\n", n, harmonico);

    return 0;
}
