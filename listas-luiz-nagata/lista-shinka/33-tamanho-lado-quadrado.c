/*Enunciado:
 * Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
 */
#include <stdio.h>

    int main() {
        float lado_quadrado, area;

        printf("Digite o tamanho do lado de um quadrado: ");
        scanf("%f", &lado_quadrado);

        area = lado_quadrado * lado_quadrado;

        printf("A area desse quadrado e de: %.2f", area);
    
        return 0;
    }