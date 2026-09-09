/* Enunciado:
 * Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
 */
#include <stdio.h>

    int main() {
        int num, primeiro, segundo, penultimo, ultimo;

        printf("Digite um numero inteiro (de 1000 a 9999): ");
        scanf("%d", &num);

        primeiro = num / 1000;
        segundo = (num % 1000) / 100;
        penultimo = (num / 10) % 10;
        ultimo = num % 10;

        printf("%d\n", primeiro);
        printf("%d\n", segundo);
        printf("%d\n", penultimo);
        printf("%d\n", ultimo);

        return 0;
}