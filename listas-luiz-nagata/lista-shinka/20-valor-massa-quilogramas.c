/* Enunciado:
 * Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
 * de conversãoé: L = K * 0,45, sendo K a massa em quilogramas e L a massa em libras.
 */
#include <stdio.h>

    int main() {
        float quilogramas, libras;

        printf("Digite um valor de massa em quilogramas: ");
        scanf("%f", &quilogramas);

        libras = quilogramas / 0.45;

        printf("O valor convertido em libras e de: %.1f", libras);

        return 0;
    }