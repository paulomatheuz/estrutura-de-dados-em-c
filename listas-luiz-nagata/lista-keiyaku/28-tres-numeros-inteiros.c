/* Enunciado:
 * Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
 * seguintes médias de acordo com um valor numérico digitado pelo usuário:
 * a — geométrica: ³√(x * y * z);
 * b — ponderada: (x + 2y + 3z) / 6;
 * c — harmônica: 3 / ((1/x) + (1/y) + (1/z));
 * d — aritmética: (x + y + z) / 3.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    int x, y, z;
    char opcao;
    float resultado;

    printf("Digite um valor inteiro positivo para x: ");
    scanf("%d", &x);
    printf("Digite um valor inteiro positivo para y: ");
    scanf("%d", &y);
    printf("Digite um valor inteiro positivo para z: ");
    scanf("%d", &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Valores invalidos!\n");
        return 0;
    }

    printf("a-Geometrica  b-Ponderada  c-Harmonica  d-Aritmetica\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
        case 'A':
            resultado = cbrt((float)x * y * z);
            break;

        case 'b':
        case 'B':
            resultado = (x + 2.0f * y + 3.0f * z) / 6.0f;
            break;

        case 'c':
        case 'C':
            resultado = 3.0f / ((1.0f / x) + (1.0f / y) + (1.0f / z));
            break;

        case 'd':
        case 'D':
            resultado = (x + y + z) / 3.0f;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
