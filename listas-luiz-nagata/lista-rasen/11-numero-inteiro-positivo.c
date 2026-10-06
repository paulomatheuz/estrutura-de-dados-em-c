/*
 * Lista Rasen - Questão 11
 * Tema: Estruturas de repetição
 *
 * Exibe os naturais de zero até N em ordem crescente.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
