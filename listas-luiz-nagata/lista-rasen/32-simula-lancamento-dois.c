/*
 * Lista Rasen - Questão 32
 * Tema: Estruturas de repetição
 *
 * Simula N lançamentos de dois dados e compara seus valores.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int quantidade;
    int i;

    do {
        printf("Digite a quantidade de lançamentos: ");
        scanf("%d", &quantidade);
    } while (quantidade <= 0);

    srand((unsigned int)time(NULL));

    for (i = 1; i <= quantidade; i++) {
        int d1 = rand() % 6 + 1;
        int d2 = rand() % 6 + 1;

        printf("Lançamento %d: d1 = %d, d2 = %d -> ", i, d1, d2);
        if (d1 > d2) {
            printf("d1 > d2\n");
        } else if (d1 < d2) {
            printf("d1 < d2\n");
        } else {
            printf("d1 = d2\n");
        }
    }

    return 0;
}
