/* Enunciado:
 * Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
 * ele recebeu um aumento de 25%.
 */
#include <stdio.h>

    int main() {
        float salario_funcionario, aumento, salario_final;

        printf("Digite o salario de um funcionario: ");
        scanf("%f", &salario_funcionario);

        aumento = salario_funcionario * (25.0 / 100.0);
        salario_final = salario_funcionario + aumento;

        printf("O novo salario do funcionario e de: %f", salario_final);

        return 0;
    }