/* Enunciado:
 * Faça um programa para ler as dimensões de um terreno (comprimento e largura ),
 * bem como o preço do metro de telap. Imprima o custo para cercar este mesmo terreno
 * com tela.
 */
#include <stdio.h>

    int main() {
        float comprimento, largura, preco_m_tela, custo, tamanho_total;

        printf("Digite o comprimento do terreno: ");
        scanf("%f", &comprimento);
        printf("Digite a largura do terreno: ");
        scanf("%f", &largura);
        printf("Digite o valor do metro de tela: ");
        scanf("%f", &preco_m_tela);

        tamanho_total = (comprimento * 2) + (largura * 2);
        custo = tamanho_total * preco_m_tela;

        printf("O custo para cercar esse terreno com tela e de: %.2f", custo);

        return 0;
    }