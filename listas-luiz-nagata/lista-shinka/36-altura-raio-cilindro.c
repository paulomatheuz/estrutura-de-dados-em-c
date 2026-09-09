/* Enunciado:
 * Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
 * de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio2 ∗ altura,
 * onde π = 3.141592.
 */
#include <stdio.h>

    int main() {
        float altura, raio, volume;
        float pi = 3.141592;

        printf("Digite a altura de um cilindro circular: ");
        scanf("%f", &altura);
        printf("Digite o raio  de um cilindro circular: ");
        scanf("%f", &raio);

        volume = pi * (raio * raio) * altura;

        printf("O volume do cilindro e de: %.2f", volume);

        return 0;
    }