/* Enunciado:
 * Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
 * fórmula de conversão é: L = 1000 ∗ M, sendo L o volume em litros e M o volume em
 * metros cúbicos.
 */
#include <stdio.h>

    int main() {
        float m_cubico, litros;

        printf("Digite um valor de volume em metros cúbicos: ");
        scanf("%f", &m_cubico);

        litros = 1000 * m_cubico;

        printf("O volume em litros e de: %.1f", litros);

        return 0;
    }