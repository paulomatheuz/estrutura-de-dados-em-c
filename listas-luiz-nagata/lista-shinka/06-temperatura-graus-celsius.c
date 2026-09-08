/* Enunciado:
 * Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
 * A fórmula de conversãoé:F =C∗(9.0/5.0)+32.0, sendoF a temperatura em Fahrenheit
 * e C a temperatura em Celsius.
 */
#include <stdio.h> 

    int main() {    
        float celsius, fahrenheit;

        printf("Digite uma temperatura em graus Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = celsius * (9.0 / 5.0) + 32.0;

        printf("A temperatura em Fahrenheit e de: %.1f", fahrenheit);

        return 0;
}