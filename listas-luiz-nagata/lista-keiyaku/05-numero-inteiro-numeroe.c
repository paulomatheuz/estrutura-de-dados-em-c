/* Enunciado:
 * Faça um programa que receba um número inteiro e verifique se este númeroé par ouímpar.
 */
#include <stdio.h>

    int main() {
        int num;

        printf("Digite um numero inteiro: ");
        scanf("%f", &num);

        if (num % 2 == 0) {
            printf("Este numero é par!");
        } else {
            printf("Este numero é impar!");
        }
        return 0;
    }