/* Enunciado:
 * Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
 * imprima o numero ao quadrado.
 */
#include <stdio.h>
#include <math.h>

    int main() {
        float num_real, raiz_quadrada, num_quadrado;

        printf("Digite um numero: ");
        scanf("%f", &num_real);

        if (num_real >= 0) {
            raiz_quadrada = sqrt(num_real); 
            printf("A raiz quadrada desse numero e de: %f\n", raiz_quadrada);
        } else {
            num_quadrado = num_real * num_real;
            printf("O valor quadrado deste numero e de: %f", num_quadrado);
        }

        return 0;
    }