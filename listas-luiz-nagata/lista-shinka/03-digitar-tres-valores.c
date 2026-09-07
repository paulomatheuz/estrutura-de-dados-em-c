/* Enunciado:
 * Faça um programa que leia três valores inteiros e mostre a soma deles.
 */
 #include <stdio.h>
    int main() {
        int valor1, valor2, valor3, soma;

        printf("Digite o primeiro valor: ");
        scanf("%d", &valor1);
        printf("Digite o segundo valor: ");
        scanf("%d", &valor2);
        printf("Digite o terceiro valor: ");
        scanf("%d", &valor3);

        soma = valor1 + valor2 + valor3;

        printf("A soma entre esses numeros e: %d\n", soma);

        return 0;
    }
