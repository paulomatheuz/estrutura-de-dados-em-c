/* Enunciado:
 * Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
 * distância da origem (0, 0).
 */
#include <stdio.h>
#include <math.h>

    int main() {
        float x, y, distancia;

        printf("Digite o valor de x: ");
        scanf("%f", &x);
        printf("Digite o valor de y: ");
        scanf("%f", &y);

        distancia = sqrt((x * x) + (y * y));

        printf("A distancia da origem (0, 0) e de: %.2f", distancia);

        return 0;
    }