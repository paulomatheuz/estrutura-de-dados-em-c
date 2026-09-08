/* Enunciado:
 * Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A
 * fórmula de conversãoé: M = A ∗ 4048,58, sendo M a área em metros quadrados e A a área em acres.
 */
#include <stdio.h>

    int main() {
        float acres, m_quadrado;

        printf("Digite um valor de area em Acres: ");
        scanf("%f", &acres);

        m_quadrado = acres * 4048.58;

        printf("O valor de área convertido em metros quadrados e de: %.2f", m_quadrado);

        return 0;
    }