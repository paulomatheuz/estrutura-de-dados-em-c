/*
 * Lista Rasen - Questão 20
 * Tema: Estruturas de repetição
 *
 * Classifica uma sequência como par ou ímpar até o valor sentinela 1000.
 */

#include <stdio.h>

int main(void) {
    int numero;
    int lidos = 0;
    int pares = 0;

    do {
        printf("Digite um número (1000 encerra): ");
        scanf("%d", &numero);

        if (numero != 1000) {
            lidos++;

            if (numero % 2 == 0) {
                pares++;
                printf("%d é par.\n", numero);
            } else {
                printf("%d é ímpar.\n", numero);
            }
        }
    } while (numero != 1000);

    printf("Números lidos: %d\n", lidos);
    printf("Valores pares: %d\n", pares);

    return 0;
}
