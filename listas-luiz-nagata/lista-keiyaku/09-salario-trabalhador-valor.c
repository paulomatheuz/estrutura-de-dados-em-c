/* Enunciado:
 * Leia o salário de um trabalhador e o valor da prestaç ão de um empréstimo. Se a
 * prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
 * contrário imprima: Empréstimo concedido.
 */
#include <stdio.h>

    int main() {
        float salario, parcela_emprestimo, vinte_porc_salario;

        printf("Digite o salario de um trabalhador: ");
        scanf("%f", &salario);
        printf("Digite o valor da prestação de um emprestimo: ");
        scanf("%f", &parcela_emprestimo);

        vinte_porc_salario = salario * (20.0 / 100.0);

        if (parcela_emprestimo > vinte_porc_salario) {
            printf("Empréstimo não concedido!");
        } else {
            printf("Empréstimo concedido!");
        }

        return 0;
    }