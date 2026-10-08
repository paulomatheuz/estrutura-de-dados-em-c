/*
 * Lista Rasen - Questão 22
 * Tema: Estruturas de repetição
 *
 * Calcula a média de uma sequência de notas válidas entre 10 e 20.
 */

#include <stdio.h>

int main(void) {
    float nota;
    float soma = 0.0f;
    int quantidade = 0;

    while (1) {
        printf("Digite uma nota entre 10 e 20 (outro valor encerra): ");
        scanf("%f", &nota);

        if (nota < 10.0f || nota > 20.0f) {
            break;
        }

        soma += nota;
        quantidade++;
    }

    if (quantidade > 0) {
        printf("Média: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota válida foi informada.\n");
    }

    return 0;
}
