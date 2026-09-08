/* Enunciado:
 * Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
 * (metros por segundo). A fórmula de conversãoé: M =K/3.6, sendoK a velocidade em
 * km/h eM em m/s.
 */
#include <stdio.h>

    int main() {
        float km_hora, m_segundo;
        
        printf("Digite a velocidade km/h: ");
        scanf("%f", &km_hora);

        m_segundo = km_hora / 3.6;

        printf("A velocidade em Metros por segundo e de: %.1f", m_segundo);

        return 0;
    }