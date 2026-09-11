/* Enunciado:
 * Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
 * soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
 * 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a
 * mensagem “Número inválido”.
 */
#include <stdio.h>

    int main() {
        int num, ultimo_num, soma = 0;

        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Numero invalido!\n");
            return 0;
        }

        while (num > 0) {
            ultimo_num = num % 10;
            soma += ultimo_num;
            num /= 10;
        }

        printf("Soma dos algarismos: %d\n", soma);
        return 0;
    }