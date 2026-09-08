/* Enunciado:
 * Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2.
 * A fórmula de conversão é: M = H ∗ 10000, sendo M a área em metros quadrados e H
 * a área em hectares.
 */
#include <stdio.h>

    int main() {
        float hectares, m_quadrados;

        printf("Digite o valor de aréa em hectares: ");
        scanf("%f", &hectares);

        m_quadrados = hectares * 10000;

        printf("O valor de area convertido em metros quadrados e de: %.1f", m_quadrados);

        return 0;
    }