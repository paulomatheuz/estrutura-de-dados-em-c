/* Enunciado:
 * Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
 */
#include <stdio.h>

    int main() {
        int num, antecessor, sucessor;

        printf("Digite um numero: ");
        scanf("%d", &num);

        antecessor = num - 1;
        sucessor = num + 1;

        printf("O antecessor de %d e: %d, e o sucessor e: %d", num, antecessor, sucessor);

        return 0;
    }