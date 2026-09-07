/* Enunciado:
 * Faça um programa que leia um número real e o imprima.
 */
#include <stdio.h>

int main () {
    printf("Digite um numero real: ");
    
    float numero;

    scanf("%f", &numero);
    printf("O numero digitado foi: %f\n", numero);
    
    return 0;
}
