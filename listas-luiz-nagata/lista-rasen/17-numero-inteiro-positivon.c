/*
 * Lista Rasen - Questão 17
 * Tema: Estruturas de repetição
 *
 * Calcula a soma dos N primeiros números naturais.
 */

#include <stdio.h>

int main(void) {
    int n;
    int i;
    int soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    printf("Soma dos %d primeiros naturais: %d\n", n, soma);

    return 0;
}
