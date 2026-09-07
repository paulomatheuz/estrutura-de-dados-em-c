/* Enunciado:
 * Leia um número real e imprima a quinta parte deste número.
 */
#include <stdio.h>
int main() {
    int numero, sucessor, antecessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    sucessor = numero + 1;
    antecessor = numero - 1;
    
    printf("O antecessor de %d e: %d e o sucessor e: %d", numero, antecessor, sucessor);
    return 0;
}
