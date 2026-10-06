/*
 * Lista Rasen - Questão 13
 * Tema: Estruturas de repetição
 *
 * Exibe os números pares de zero até N em ordem crescente.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;

    printf("Digite um número inteiro positivo e par: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
