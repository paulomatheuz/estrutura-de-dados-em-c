/*
 * Lista Rasen - Questão 21
 * Tema: Estruturas de repetição
 *
 * Soma os pares e multiplica os ímpares de um intervalo.
 */

#include <stdio.h>

int main(void) {
    int inicio;
    int fim;
    int auxiliar;
    int i;
    long long somaPares = 0;
    long long produtoImpares = 1;
    int haImpar = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &inicio);
    printf("Digite o segundo número: ");
    scanf("%d", &fim);

    if (inicio > fim) {
        auxiliar = inicio;
        inicio = fim;
        fim = auxiliar;
    }

    for (i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            produtoImpares *= i;
            haImpar = 1;
        }
    }

    printf("Soma dos pares: %lld\n", somaPares);
    if (haImpar) {
        printf("Produto dos ímpares: %lld\n", produtoImpares);
    } else {
        printf("Não há ímpares no intervalo.\n");
    }

    return 0;
}
