/* Enunciado:
 * Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
 * Gere outro número formado pelos dígitos invertidos do número lido. Exemplo:
 * NúmeroLido = 123
 * NúmeroGerado = 321.
 */
#include <stdio.h>

int main() {
    int num, ultimo, meio, primeiro, invertido;

    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%d", &num);

    ultimo = num % 10;
    meio = (num / 10) % 10;
    primeiro = num / 100;
    invertido = ultimo * 100 + meio * 10 + primeiro;

    printf("Numero invertido: %d\n", invertido);
    return 0;
}