/*
 * Uma empresa reajusta salários conforme as tabelas abaixo. Leia o salário atual e 
 * o tempo de serviço, calcule e imprima o salário final reajustado — ou uma mensagem 
 * caso não tenha direito a aumento.
 * 
 * Salário atual	         Reajuste
 * Até R$ 500,00	           25%
 * Até R$ 1.000,00	           20%
 * Até R$ 1.500,00	           15%
 * Até R$ 2.000,00	           10%
 * Acima de R$ 2.000,00	   Sem reajuste
 * 
 * Tempo de serviço	          Bônus
 * Abaixo de 1 ano	        Sem bônus
 * De 1 a 3 anos	        R$ 100,00
 * De 4 a 6 anos	        R$ 200,00
 * De 7 a 10 anos	        R$ 300,00
 * Mais de 10 anos	        R$ 500,00
 */
#include <stdio.h>

    int main() {
        float salario_atual, tempo_servico, salario_reajustado, reajuste, salario_final, bonus;

        printf("Digite o sálario atual: ");
        scanf("%f", &salario_atual);
        printf("Digite o tempo de serviço: ");
        scanf("%f", &tempo_servico);

        if (salario_atual <= 500.00) {
            reajuste = salario_atual * 0.25;
        } else if (salario_atual <= 1000.00) {
            reajuste = salario_atual * 0.20;
        } else if (salario_atual <= 1500.00) {
            reajuste = salario_atual * 0.15;
        } else if (salario_atual <= 2000.00) {
            reajuste = salario_atual * 0.10;
        } else {
            reajuste = 0.0;
        }

        if (tempo_servico < 1.0) {
            bonus = 0.0;
        } else if (tempo_servico <= 3.0) {
            bonus = 100.00;
        } else if (tempo_servico <= 6.0) {
            bonus = 200.00;
        } else if (tempo_servico <= 10.0) {
            bonus = 300.00;
        } else {
            bonus = 500.00; 
        }

        if (reajuste == 0.0 && bonus == 0.0) {
        printf("\nO funcionario nao tem direito a nenhum aumento.\n");
        } else {
            salario_final = salario_atual + reajuste + bonus;
            printf("Salario final: R$ %.2f\n", salario_final);
    }
    return 0;
}
