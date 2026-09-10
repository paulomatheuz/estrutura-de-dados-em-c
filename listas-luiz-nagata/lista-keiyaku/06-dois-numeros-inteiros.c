/* Enunciado:
 * Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
 * assim como a diferença existente entre ambos.
 */
#include <stdio.h>

    int main() {
        int num1, num2, maior, menor, diferenca;

        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);

        if (num1 > num2) {
            maior = num1;
            menor = num2;
            printf("O maior e: %d", maior);
        } else {
            maior = num2;
            menor = num1;
            printf("O maior e: %d", maior);
        }

        diferenca = maior - menor;
        
        printf("A diferença e de: %d", diferenca);

        return 0;
    }