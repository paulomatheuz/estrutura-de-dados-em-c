/* Enunciado:
 * Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
 * três valores lidos.
 */
#include <stdio.h>

    int main() {
        float valor1, valor2, valor3, soma_quadrados;

        printf("Digite o primeiro valor: ");
        scanf("%f", & valor1);

        printf("Digite o segundo valor: ");
        scanf("%f", & valor2);

        printf("Digite o terceiro valor: ");
        scanf("%f", & valor3);

        soma_quadrados = (valor1 * valor1) + (valor2 * valor2) + (valor3 * valor3);

        printf("A soma dos quadrados dos tres numeros e de: %.2f", soma_quadrados);

        return 0;
    }