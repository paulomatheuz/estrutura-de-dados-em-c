/* Enunciado:
 * Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
 * conversão é: M = K / 1,61, sendo K a distância em quilômetros e M em milhas.
 */
#include <stdio.h>

    int main() {
        float distancia_km, distancia_milhas;

        printf("Digite uma distancia em Quilometros: ");
        scanf("%f", &distancia_km);

        distancia_milhas = distancia_km / 1.61;

        printf("A distancia em Milhas e de: %.1f", distancia_milhas);

        return 0;
    }