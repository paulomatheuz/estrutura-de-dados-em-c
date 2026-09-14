/* Enunciado:
 * Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou
 * 5, mas não simultaneamente pelos dois.
 */
#include <stdio.h>

    int main() {
        int num, div3, div5;

        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 3 == 0 && num % 5 == 0) {
            printf("Este numero é divisivel por 3 e por 5!");
        }
        else if (num % 3 == 0) {
            printf("Este numero é divisivel por 3!");
        }
        else if (num % 5 == 0) {
            printf("Este numero é divisivel por 5!");
        }
        else {
            printf("Este numero não é divisivel nem por 3 e nem por 5!");
        }

        return 0;
    }