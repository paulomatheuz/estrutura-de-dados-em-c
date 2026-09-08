/* Enunciado:
 * Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
 * fórmula de conversãoé: C = K− 273.15, sendo C a temperatura em Celsius e K a
 * temperatura em Kelvin.
 */
#include <stdio.h>

int main() {
    float kelvin, celsius;

    printf("Digite uma temperatura em graus Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("A temperatura em graus Celsius e de: %.1f", celsius);

    return 0;
}