/* Enunciado:
 * Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo
 * e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguin-
 * tes conceitos:
 * • O comprimento de cada lado de um triângulo é menor do que a soma dos outros
 * dois lados.
 * • Chama-se equilátero o triângulo que tem três lados iguais.
 * • Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
 * • Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
 */
#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Digite tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a >= b + c || b >= a + c || c >= a + b) {
        printf("Os valores nao formam um triangulo!\n");
    } else if (a == b && b == c) {
        printf("Triangulo equilatero!\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo isosceles!\n");
    } else {
        printf("Triangulo escaleno!\n");
    }

    return 0;
}