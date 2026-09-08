/* Enunciado:
 * Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
 * A fórmula de conversão é: C = P∗ 2.54, sendo C o comprimento em centímetros e P o
 * comprimento em polegadas.
 */
#include <stdio.h>

    int main() {
        float polegadas, centimetros;

        printf("Digite um valor de comprimento em polegadas: ");
        scanf("%f", &polegadas);

        centimetros = polegadas * 2.54;
        
        printf("O valor do comprimento em centimetros e de: %.1f", centimetros);

        return 0;
    }