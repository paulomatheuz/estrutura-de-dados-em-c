/* Enunciado:
 * Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
 * números forem iguais, imprima a mensagemNúmeros iguais.
 */
#include <stdio.h>

    int main() {
        float num1, num2, maior, iguais;

        printf("Digite um numero: ");
        scanf("%f", &num1);
        printf("Digite outro numero: ");
        scanf("%f", &num2);

        if (num1 > num2) {
            maior = num1;
            printf("O maior e: %.2f", maior);
        } else if (num2 > num1) {
            maior = num2;
            printf("O maior e: %.2f", maior);
        }
        if (num1 == num2) {
            printf("Numeros iguais!");
        }

        return 0;
    }