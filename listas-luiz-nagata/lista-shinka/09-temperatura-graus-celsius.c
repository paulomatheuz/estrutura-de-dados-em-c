/* Enunciado:
 * Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
 * fórmula de conversãoé: K = C + 273.15, sendo C a temperatura em Celsius e K a
 * temperatura em Kelvin.
 */
#include <stdio.h>

    int main() {
        float celsius, kelvin;
        
        printf("Digite uma temperatura em graus Celsius: ");
        scanf("%f", &celsius);

        kelvin = celsius + 273.15;
        
        printf("A temperatura em Kelvin e de: %.1f", kelvin);

        return 0;
    }