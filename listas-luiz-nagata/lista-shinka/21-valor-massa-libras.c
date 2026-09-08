/* Enunciado:
 * Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
 * de conversão é: K = L∗ 0.45, sendo K a massa em quilogramas e L a massa em libras.
 */
#include <stdio.h>

    int main() {
        float libras, quilogramas;

        printf("Digite um valor de massa em Libras: ");
        scanf("%f", &libras);
        
        quilogramas = libras * 0.45;

        printf("O valor convertido em quilogramas e de: %f", quilogramas);

        return 0;
    }