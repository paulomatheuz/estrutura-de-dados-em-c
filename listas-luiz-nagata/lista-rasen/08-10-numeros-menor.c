/*
 * Lista Rasen - Questão 08
 * Tema: Estruturas de repetição
 *
 * Identifica o menor e o maior entre dez números.
 */

#include <stdio.h>

int main(void) {
    float numero;
    float menor;
    float maior;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &numero);

        if (i == 1) {
            menor = numero;
            maior = numero;
        } else {
            if (numero < menor) {
                menor = numero;
            }

            if (numero > maior) {
                maior = numero;
            }
        }
    }

    printf("Menor valor: %.2f\n", menor);
    printf("Maior valor: %.2f\n", maior);

    return 0;
}
