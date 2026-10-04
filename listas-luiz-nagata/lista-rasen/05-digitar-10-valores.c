/*
 * Lista Rasen - Questão 05
 * Tema: Estruturas de repetição
 *
 * Lê dez valores e apresenta a soma deles.
 */

#include <stdio.h>

int main(void) {
    float valor;
    float soma = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%f", &valor);
        soma += valor;
    }

    printf("Soma dos valores: %.2f\n", soma);

    return 0;
}
