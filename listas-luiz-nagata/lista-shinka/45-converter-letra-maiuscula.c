/* Enunciado:
 * Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
 * ASCII para resolver o problema.
 */
#include <stdio.h>

    int main() {
        char x, y;
    
        printf("Digite uma letra maiuscula: ");
        scanf("%c", &x);

        y = x + 32;

        printf("A letra %c em minusculo e: %c\n", x, y);

        return 0;    
}