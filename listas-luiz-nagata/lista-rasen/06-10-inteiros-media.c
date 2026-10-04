/*
 * Lista Rasen - Questão 06
 * Tema: Estruturas de repetição
 *
 * Lê dez números inteiros e calcula a média.
 */

#include <stdio.h>

int main(void) {
    int numero;
    int soma = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número inteiro: ", i);
        scanf("%d", &numero);
        soma += numero;
    }

    printf("Média: %.2f\n", soma / 10.0);

    return 0;
}
