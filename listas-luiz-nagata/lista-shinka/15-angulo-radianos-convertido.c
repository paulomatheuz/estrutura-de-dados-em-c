/* Enunciado:
 * Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de 
 * conversão é: G = R∗ 180 / π, sendo G oângulo em graus eR em radianos e π = 3.14.
 */
#include <stdio.h>

    int main() {
        float radianos, graus;
        float pi = 3.14;
        
        printf("Digite um angulo em Radianos: ");
        scanf("%f", &radianos);

        graus = radianos * 180 / pi;

        printf("O angulo em Graus e de: %.1f", graus);

        return 0;
    }