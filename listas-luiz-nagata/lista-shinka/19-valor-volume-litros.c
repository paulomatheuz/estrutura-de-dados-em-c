/* Enunciado:
 * Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. 
 * A fórmula de conversãoé: M = L * 1000, sendo L o volume em litros e M o volume em metros
 * cúbicos.
 */
#include <stdio.h>

    int main() {
        float litros, m_cubicos;
        
        printf("Digite um valor de volume em litros: ");
        scanf("%f", &litros);

        m_cubicos = litros / 1000;

        printf("O valor convertido em metros cúbicos e de: %.1f", m_cubicos);

        return 0;
    }