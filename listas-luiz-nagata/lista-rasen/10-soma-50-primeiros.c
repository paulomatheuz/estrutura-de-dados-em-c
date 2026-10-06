/*
 * Lista Rasen - Questão 10
 * Tema: Estruturas de repetição
 *
 * Calcula a soma dos cinquenta primeiros números pares.
 */

#include <stdio.h>

int main(void) {
    int numero;
    int soma = 0;

    for (numero = 2; numero <= 100; numero += 2) {
        soma += numero;
    }

    printf("Soma dos 50 primeiros pares: %d\n", soma);

    return 0;
}
