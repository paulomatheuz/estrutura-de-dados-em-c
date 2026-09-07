/* Enunciado:
 * Leia um número real e imprima o resultado do quadrado desse número.
 */
#include <stdio.h>
int main() {
    int numero, quadrado_numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    quadrado_numero = numero * numero;
    
    printf("O quadrado de %d e: %d", numero, quadrado_numero);
    
    return 0;
}