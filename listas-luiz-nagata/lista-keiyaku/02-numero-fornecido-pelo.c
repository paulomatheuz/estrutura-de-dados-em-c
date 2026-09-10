/* Enunciado:
 * Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
 * quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
 * númeroé inválido.
 */
#include <stdio.h>
#include <math.h>

    int main(void) {
        float num, raiz_quadrada;

        printf("Digite um numero: ");
        scanf("%f", &num);

        if (num >= 0) {
            raiz_quadrada = sqrt(num);
            printf("A raiz quadrada e: %f\n", raiz_quadrada);
        } else {
            printf("Numero invalido!\n");
        }

        return 0;
    }