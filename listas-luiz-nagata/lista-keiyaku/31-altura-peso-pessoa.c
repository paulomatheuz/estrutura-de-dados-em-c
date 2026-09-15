/* Enunciado:
 * Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
 * a seguir, verifique e mostra qual a classificação dessa pessoa.
 * Altura                 Peso Até 60      Entre 60 e 90 (Inclusive)      Acima de 90
 * Menor que 1,20             A                     D                         G
 * De 1,20 a 1,70             B                     E                         H
 * Maior que 1,70             C                     F                         I
 */
#include <stdio.h>

    int main() {
        float altura, peso;

        printf("Digite a sua altura (m) e o seu peso (kg): ");
        scanf("%f %f", &altura, &peso);

        if (altura < 1.20) {
            if (peso <= 60) {
                printf("Classificação: A\n");
            } else if (peso <= 90) {
                printf("Classificação: D\n");
            } else {
                printf("Classificação: G\n");
            }
        } 

        else if (altura <= 1.70) {
            if (peso <= 60) {
                printf("Classificação: B\n");
            } else if (peso <= 90) {
                printf("Classificação: E\n");
            } else {
                printf("Classificação: H\n");
            }
        } 
        else {
            if (peso <= 60) {
                printf("Classificação: C\n");
            } else if (peso <= 90) {
                printf("Classificação: F\n");
            } else {
                printf("Classificação: I\n");
            }
        }

        return 0;
    }
