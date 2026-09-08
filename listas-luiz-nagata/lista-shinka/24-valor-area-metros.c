/* Enunciado:
 * Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. 
 * A fórmula de conversão é: A = M ∗ 0.000247, sendo M aárea em metros quadrados e A a área em acres.
 */
#include <stdio.h>

    int main() {
        float m_quadrados, acres;

        printf("Digite um valor de area em metros quadrados: ");
        scanf("%f", &m_quadrados);

        acres = m_quadrados * 0.000247;

        printf("O valor da area convertido para Acres e de: %.4f", acres);

        return 0;
    }