/* Enunciado:
 * O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão 
 * do distribuidor e dos impostos. Ambos os percentuais incidem sobre o custo de fábrica.
 * Custo de fábrica	                      Distribuidor	      Impostos
 * Até R$ 12.000,00	                          5%	           Isento
 * Entre R$ 12.000,00 e R$ 25.000,00	      10%	            15%
 * Acima de R$ 25.000,00	                  15%	            20%
Leia o custo de fábrica e imprima o custo ao consumidor.
 */
#include <stdio.h>

    int main() {
        float custo_fabrica, comissao_distribuidor, impostos, custo_consumidor;

        printf("Digite o custo da fábrica: ");
        scanf("%f", &custo_fabrica);

        if (custo_fabrica <= 12000.00) {
            comissao_distribuidor = custo_fabrica * 0.05;
            impostos = 0.0;
        } else if (custo_fabrica <= 25000.00) {
            comissao_distribuidor = custo_fabrica * 0.10;
            impostos = custo_fabrica * 0.15;
        } else if (custo_fabrica > 25000.00) {
            comissao_distribuidor = custo_fabrica * 0.15;
            impostos = custo_fabrica * 0.20;
        }

        custo_consumidor = custo_fabrica + comissao_distribuidor + impostos;
        printf("O custo ao consumidor será: %f", custo_consumidor);

        return 0;
    }
