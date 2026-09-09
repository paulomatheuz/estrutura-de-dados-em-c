/* Enunciado:
 * Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-
 * se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
 * ele paga 7% de imposto sobre o salário-base.
 */
#include <stdio.h>

    int main() {
        float salario_base, salario_receber, bonus, desconto;

        printf("Qual salario base do funcionario?: ");
        scanf("%f", &salario_base);

        bonus = salario_base * (5.0 / 100);
        desconto = salario_base * (7.0 / 100.0);
        salario_receber = salario_base - desconto;
        salario_receber += bonus;
        
        printf("O salario a receber e de: %.2f", salario_receber);

        return 0;
    }