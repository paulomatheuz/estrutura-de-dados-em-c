/*
 * Lista Rasen - Questão 09
 * Tema: Estruturas de repetição
 *
 * Exibe os N primeiros números naturais ímpares.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;

    printf("Digite a quantidade de números ímpares: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d\n", 2 * i + 1);
    }

    return 0;
}
