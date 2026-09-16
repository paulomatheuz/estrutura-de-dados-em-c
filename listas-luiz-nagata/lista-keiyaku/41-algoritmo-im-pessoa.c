/* Enunciado: Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação:
 * IMC	                          Classificação
 * Menor que 18,5	              Abaixo do peso
 * 18,6 a 24,9	                    Saudável
 * 25,0 a 29,9	                 Peso em excesso
 * 30,0 a 34,9	                 Obesidade grau I
 * 35,0 a 39,9	             Obesidade grau II (severa)
 * Maior ou igual a 40,0	Obesidade grau III (mórbida)
 */
#include <stdio.h>

    int main() {
        float peso, altura, imc;

        printf("Digite seu peso: ");
        scanf("%f", &peso);
        printf("Digite sua altura: ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        if (imc < 18.6) {
            printf("Classificação: Abaixo do peso!");
        } else if (imc < 25.0) {
            printf("Classificação: Saudável!");
        } else if (imc < 30.0) {
            printf("Classificação: Peso em excesso!");
        } else if (imc < 35.0) {
            printf("Classificação: Obesidade grau I");
        } else if (imc < 40.0) {
            printf("Classificação: Obesidade grau II");
        } else {
            printf("Classificação: Obesidade grau III");
        }

        return 0;
    }
