/* Enunciado:
 * Sejam a e b os catetos de um triângulo, onde a hipotenusaé obtida pela equação:
 * hipotenusa = √ a2 +b2. Faça um programa que receba os valores de a e b e calcule
 * o valor da hipotenusa através da equação. Imprima o resultado dessa operação.
 */
#include <stdio.h>
#include <math.h>

    int main() {
        float a, b, hipotenusa;

        printf("Digite o cateto A de um triangulo: ");
        scanf("%f", &a);
        printf("Digite o cateto B de um triangulo: ");
        scanf("%f", &b);

        hipotenusa =  sqrt((a * a) + (b * b));

        printf("A hipotenusa atraves da equacao e de: %.2f", hipotenusa);
        return 0;
    }