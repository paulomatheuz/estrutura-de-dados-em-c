/*
 * Lista Rasen - Questão 14
 * Tema: Estruturas de repetição
 *
 * Exibe os números pares de N até zero em ordem decrescente.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;

    printf("Digite um número inteiro positivo e par: ");
    scanf("%d", &n);

    for (i = n; i >= 0; i -= 2) {
        printf("%d\n", i);
    }

    return 0;
}
