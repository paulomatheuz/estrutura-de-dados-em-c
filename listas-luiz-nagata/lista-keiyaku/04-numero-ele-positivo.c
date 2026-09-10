/* Enunciado:
 * Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 * • O número digitado ao quadrado
 * • A raiz quadrada do número digitado
 */
#include <stdio.h>
#include <math.h>

    int main() {
        float num, num_quadrado, raiz_quadrada;
        
        printf("Digite um numero: ");
        scanf("%f", &num);

        if (num > 0) {
            num_quadrado = num * num;
            raiz_quadrada = sqrt(num);
            printf("O numero digitado ao quadrado e de: %.2f\n", num_quadrado);
            printf("A raiz quadrada do numero digitado e de: %.2f\n", raiz_quadrada);
        }

        return 0;
    }