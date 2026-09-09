/* Enunciado:
 * Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.
 * A área do círculo é π ∗ raio2, considere π = 3.141592.
 */
#include <stdio.h>
    int main() {
        float raio, area; 
        float pi = 3.141592;

        printf("Digite o valor do raio de um circulo: ");
        scanf("%f", &raio);

        area = pi * (raio * raio);
        
        printf("A area do circulo e de: %.2f", area);

        return 0;
    }