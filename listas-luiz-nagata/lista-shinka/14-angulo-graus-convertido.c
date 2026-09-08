/* Enunciado:
 * Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de 
 * conversão é: R = G ∗ π / 180, sendo G o ângulo em graus e R em radianos e π = 3.14.
 */
#include <stdio.h>

    int main() {
        float angulo_graus, radianos;
        float pi = 3.14;

        printf("Digite um angulo em Graus: ");
        scanf("%f", &angulo_graus);

        radianos = angulo_graus * pi / 180;

        printf("O mesmo angulo em radianos e de: %.1f", radianos);
        return 0;
    }
