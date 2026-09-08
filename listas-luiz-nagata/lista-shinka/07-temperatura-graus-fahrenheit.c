/* Enunciado:
 * Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
 * A fórmula de conversãoé: C = 5.0∗ (F− 32.0)/9.0, sendoC a temperatura em Celsius
 * e F a temperatura em Fahrenheit.
 */
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("A temperatura em graus Celsius e de: %.1f", celsius);

    return 0;
}