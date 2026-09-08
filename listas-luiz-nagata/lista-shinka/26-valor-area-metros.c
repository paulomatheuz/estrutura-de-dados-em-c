/* Enunciado:
 * Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares.
 * A fórmula de conversãoé: H = M ∗ 0,0001, sendo M a área em metros quadrados e H
 * a área em hectares.
 */
#include <stdio.h>

    int main() {
        float m_quadrados, hectares;

        printf("Digite um valor de area em metros quadrados: ");
        scanf("%f", &m_quadrados);

        hectares = m_quadrados * 0.0001;

        printf("O valor da area convertido hectares: %.2f", hectares);

        return 0;
    }