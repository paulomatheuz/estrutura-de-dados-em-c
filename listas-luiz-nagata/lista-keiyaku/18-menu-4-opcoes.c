/* Enunciado:
 * Faça um programa que mostre ao usuário um menu com 4 opções de operações ma-
 * temáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu pro-
 * grama então pede dois valores numéricos e realiza a operação, mostrando o resultado e
 * saindo.
 */
#include <stdio.h>

    int main(void) {
        float num1, num2, resultado;
        int opcao;

        printf("1-Soma  2-Subtracao  3-Multiplicacao  4-Divisao\n");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida!\n");
            return 0;
        }

        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);

        switch (opcao) {
            case 1: resultado = num1 + num2; break;
            case 2: resultado = num1 - num2; break;
            case 3: resultado = num1 * num2; break;
            case 4:
                if (num2 == 0) {
                    printf("Divisao por zero nao e permitida!\n");
                    return 0;
                }
                resultado = num1 / num2;
                break;
        }

        printf("Resultado: %.2f\n", resultado);
        return 0;
    }