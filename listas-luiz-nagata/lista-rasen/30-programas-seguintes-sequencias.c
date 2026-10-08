/*
 * Lista Rasen - Questão 30
 * Tema: Estruturas de repetição
 *
 * Calcula três sequências em função de N.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;
    int sequencia1 = 0;
    int sequencia2 = 0;
    int sequencia3 = 0;

    do {
        printf("Digite um inteiro positivo N: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        sequencia1 += i;
        sequencia3 += 2 * i - 1;
    }

    for (i = 1; i <= 2 * n - 1; i++) {
        if (i % 2 == 0) {
            sequencia2 -= i;
        } else {
            sequencia2 += i;
        }
    }

    printf("1 + 2 + ... + N = %d\n", sequencia1);
    printf("1 - 2 + ... + (2N - 1) = %d\n", sequencia2);
    printf("1 + 3 + ... + (2N - 1) = %d\n", sequencia3);

    return 0;
}
