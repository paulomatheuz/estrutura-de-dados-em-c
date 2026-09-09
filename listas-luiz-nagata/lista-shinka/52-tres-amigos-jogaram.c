/* Enunciado:
 * Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
 * porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
 * que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
 * ganharia do prêmio com base no valor investido.
 */
#include <stdio.h>

    int main() {
        float v_pessoa1, v_pessoa2, v_pessoa3, investimento_total, valor_premio;
        float porcentagem_pessoa1, porcentagem_pessoa2, porcentagem_pessoa3;
        float ganhos_pessoa1, ganhos_pessoa2, ganhos_pessoa3;

        printf("Digite o valor investido para realizacao da aposta pela pessoa 1: ");
        scanf("%f", &v_pessoa1);
        printf("Digite o valor investido para realizacao da aposta pela pessoa 2: ");
        scanf("%f", &v_pessoa2);
        printf("Digite o valor investido para realizacao da aposta pela pessoa 3: ");
        scanf("%f", &v_pessoa3);
        printf("Digite o valor do premio: ");
        scanf("%f", &valor_premio);

        investimento_total = v_pessoa1 + v_pessoa2 + v_pessoa3;

        porcentagem_pessoa1 = (v_pessoa1 / investimento_total) * 100;
        porcentagem_pessoa2 = (v_pessoa2 / investimento_total) * 100;
        porcentagem_pessoa3 = (v_pessoa3 / investimento_total) * 100;

        ganhos_pessoa1 = valor_premio * (porcentagem_pessoa1 / 100);
        ganhos_pessoa2 = valor_premio * (porcentagem_pessoa2 / 100);
        ganhos_pessoa3 = valor_premio * (porcentagem_pessoa3 / 100);

        printf("Pessoa 1 - Porcentagem: %.2f%% - Premio: %.2f\n", porcentagem_pessoa1, ganhos_pessoa1);
        printf("Pessoa 2 - Porcentagem: %.2f%% - Premio: %.2f\n", porcentagem_pessoa2, ganhos_pessoa2);
        printf("Pessoa 3 - Porcentagem: %.2f%% - Premio: %.2f\n", porcentagem_pessoa3, ganhos_pessoa3);

        return  0;
    }