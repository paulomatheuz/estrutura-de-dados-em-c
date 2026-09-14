/* Enunciado:
 * Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro
 * em um percurso, calcule o consumo emKm/l e escreva uma mensagem de acordo com
 * a tabela abaixo:
 * CONSUMO (Km/l) MENSAGEM:
 * menor que 8 Venda o carro!
 * entre 8 e 14 Econômico!
 * maior que 12 Super econômico!
 */
#include <stdio.h>

int main() {
    float distancia_km, litros, consumo;

    printf("Digite a distancia em km: ");
    scanf("%f", &distancia_km);
    printf("Digite os litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Quantidade de litros invalida!\n");
        return 0;
    }

    consumo = distancia_km / litros;

    if (consumo < 8) {
        printf("Venda o carro!\n");
    } else if (consumo <= 12) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}
