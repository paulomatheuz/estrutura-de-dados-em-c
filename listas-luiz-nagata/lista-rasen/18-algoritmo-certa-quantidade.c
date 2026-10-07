/*
 * Lista Rasen - Questão 18
 * Tema: Estruturas de repetição
 *
 * Encontra o maior valor informado e quantas vezes ele aparece.
 */

#include <stdio.h>

int main(void) {
    int quantidade;
    int numero;
    int maior;
    int ocorrencias = 0;
    int i;

    printf("Quantos números serão lidos? ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (i == 0 || numero > maior) {
            maior = numero;
            ocorrencias = 1;
        } else if (numero == maior) {
            ocorrencias++;
        }
    }

    printf("Maior número: %d\n", maior);
    printf("Quantidade de ocorrências: %d\n", ocorrencias);

    return 0;
}
