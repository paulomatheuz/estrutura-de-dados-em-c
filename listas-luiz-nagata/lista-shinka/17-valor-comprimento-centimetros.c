/* Enunciado:
 * Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.
 * A fórmula de conversãoé: P = C / 2.54, sendo C o comprimento em centímetros e P o
 * comprimento em polegadas.
 */
#include <stdio.h>

    int main() {
        float centimetros, polegadas;

        printf("Digite um valor de comprimento em centimetros: ");
        scanf("%f", &centimetros);

        polegadas = centimetros / 2.54;

        printf("O valor desse comprimento em polegadas e de: %.1f", polegadas);

        return 0;
    }