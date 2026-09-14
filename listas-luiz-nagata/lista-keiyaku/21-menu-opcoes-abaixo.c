/* Enunciado:
 * Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação esco-
 * lhida. Escreva uma mensagem de erro se a opção for inválida.
 * Escolha a opção:
 * 1- Soma de 2 números.
 * 2- Diferença entre 2 números (maior pelo menor).
 * 3- Produto entre 2 números.
 * 4- Divisão entre 2 números (o denominador não pode ser zero).
 * Opção
 */
#include <stdio.h>

    int main() {
        int opcao;
        float num1, num2, resultado, maior, menor;

        printf("1 - Soma  2 - Diferenca (Maior pelo menor)  3 - Multiplicacao  4 - Divisao\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida!\n");
            return 0;
        }

        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                break;
            case 2:
                if (num1 > num2) {
                    maior = num1;
                    menor = num2;
                } else {
                    maior = num2;
                    menor = num1;
                }
                resultado = maior - menor;
                break;
            case 3:
                resultado = num1 * num2;
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: denominador nao pode ser zero!\n");
                    return 0;
                }
                resultado = num1 / num2;
                break;
            default:
                printf("Opcao invalida!\n");
                return 0;
        }

        printf("Resultado: %.2f\n", resultado);
        return 0;
    }