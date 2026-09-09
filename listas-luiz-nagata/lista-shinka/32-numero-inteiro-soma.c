/* Enunciado:
 * Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
 * seu dobro.
 */
#include <stdio.h>

    int main() {
        int num, sucessor, antecessor, soma;

        printf("Digite um numero: ");
        scanf("%d", &num);

        sucessor = (num * 3) + 1;
        antecessor = (num * 2) - 1;
        soma = sucessor + antecessor;

        printf("A soma do sucessor de seu triplo com o anteecessor de seu dobro e: %d", soma);

        return 0;
    }