/* Enunciado:
 * Faça um programa que receba três números e mostre-os em ordem crescente.
 */
#include <stdio.h>

    int main() {
        float x, y, z, aux;

        printf("Digite três números: ");
        scanf("%f %f %f", &x, &y, &z);

        if (x > y) {
            aux = x;
            x = y;
            y = aux;
        }

        if (x > z) {
            aux = x;
            x = z;
            z = aux;
        }

        if (y > z) {
            aux = y;
            y = z;
            z = aux;
        }

        printf("Ordem crescente: %.2f, %.2f, %.2f\n", x, y, z);
        return 0;
    }
