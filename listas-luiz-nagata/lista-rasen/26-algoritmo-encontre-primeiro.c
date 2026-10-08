/*
 * Lista Rasen - Questão 26
 * Tema: Estruturas de repetição
 *
 * Encontra o primeiro múltiplo de 11, 13 ou 17 após um número dado.
 */

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    do {
        numero++;
    } while (numero % 11 != 0 && numero % 13 != 0 && numero % 17 != 0);

    printf("Primeiro múltiplo encontrado: %d\n", numero);

    return 0;
}
