/* Enunciado:
 * Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
 * subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
 * seu objetivo.
 */
#include <stdio.h>
#include <math.h>

    int main() {
        float altura_degrau, altura_alcancar;
        int qtd_degraus;

        printf("Digite a altura do degrau de uma escada: ");
        scanf("%f", &altura_degrau);
        printf("Digite a altura que você deseja alcançar subindo a escada: ");
        scanf("%f", &altura_alcancar);

        qtd_degraus = (int)ceil(altura_alcancar / altura_degrau);

        printf("A quantidade de degraus que o usuario irá subir e de: %d\n", qtd_degraus);

        return 0;
    }