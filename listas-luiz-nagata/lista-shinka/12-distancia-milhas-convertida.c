/* Enunciado:
 * Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
 * conversão é: K = 1,61 ∗ M, sendo K a distância em quilômetros e M em milhas.
 */
#include <stdio.h>

    int main() {
        float distancia_milhas, distancia_km;

        printf("Digite uma distancia em Milhas: ");
        scanf("%f", &distancia_milhas);

        distancia_km = 1.61 * distancia_milhas;

        printf("A distancia em Quilometros e de: %.1f", distancia_km);

        return 0;
    }