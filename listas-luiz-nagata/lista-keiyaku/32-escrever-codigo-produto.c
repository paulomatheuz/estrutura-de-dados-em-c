/* Enunciado:
 * Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. 
 * O programa deve calcular o valor a ser pago por aquele lanche.
 * Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:
 * Especificação                       Código             Preço
 * Cachorro Quente                      100               1.20
 * Bauru Simples                        101               1.30
 * Bauru com Ovo                        102               1.50
 * Hamburguer                           103               1.20
 * Cheeseburguer                        104               1.70
 * Suco                                 105               2.20
 * Refrigerante                         106               1.00
 */
#include <stdio.h>

    int main(void) {
        int codigo, qtd;
        float preco, total;

        printf("Digite o codigo e a quantidade: ");
        scanf("%d %d", &codigo, &qtd);

        if (qtd <= 0) {
            printf("Quantidade invalida!\n");
            return 0;
        }

        switch (codigo) {
            case 100: 
                preco = 1.20f; 
                break;
            case 101: 
                preco = 1.30f; 
                break;
            case 102: 
                preco = 1.50f; 
                break;
            case 103: 
                preco = 1.20f; 
                break;
            case 104: 
                preco = 1.70f; 
                break;
            case 105: 
                preco = 2.20f;
                break;
            case 106: 
                preco = 1.00f;
                break;
            default:
                printf("Codigo invalido!\n");
                return 0;
        }

        total = preco * qtd;
        printf("Total a pagar: R$ %.2f\n", total);
        return 0;
    }
