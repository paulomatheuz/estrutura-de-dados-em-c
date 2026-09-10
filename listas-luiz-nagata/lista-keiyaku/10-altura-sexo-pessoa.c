/* Enunciado:
 * Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
 * peso ideal, utilizando as seguintes fórmulas (onde h corresponde `a altura):
 * • Homens: (72.7∗ h)− 58
 * • Mulheres: (62, 1∗ h)− 44, 7
 */
#include <stdio.h>

    int main() {
        float altura, peso_ideal;
        char sexo;

        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Sexo (M ou H): ");
        scanf(" %c", &sexo);

        if (sexo == 'M') {
            peso_ideal = 62.1 * altura - 44.7;
            printf("Peso ideal: %.2f\n", peso_ideal);
        } else if (sexo == 'H') {
            peso_ideal = 72.7 * altura - 58.0;
            printf("Peso ideal: %.2f\n", peso_ideal);
        } else {
            printf("Sexo invalido!\n");
        }

        return 0;
    }