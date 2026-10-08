/*
 * Lista Rasen - Questão 25
 * Tema: Estruturas de repetição
 *
 * Soma múltiplos de 3 ou 5 menores que 1000.
 */

#include <stdio.h>

int main(void) {
    int numero;
    int soma = 0;

    for (numero = 1; numero < 1000; numero++) {
        if (numero % 3 == 0 || numero % 5 == 0) {
            soma += numero;
        }
    }

    printf("Soma: %d\n", soma);

    return 0;
}
