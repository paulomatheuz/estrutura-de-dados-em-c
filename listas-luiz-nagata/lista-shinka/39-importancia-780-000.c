/* Enunciado:
 * A quantia de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
 * Sendo que da quantia total:
 * • O primeiro ganhador receberá 46%;
 * • O segundo receberá 32%;
 * • O terceiro receberá o restante;
 * Calcule e imprima a quantia ganha por cada um dos ganhadores.
 */
#include <stdio.h>

    int main() {
        float ganhador1, ganhador2, ganhador3;
        float quantia = 780000.0;

        ganhador1 = quantia * (46.0 / 100.0);
        ganhador2 = quantia * (32.0 / 100.0);
        ganhador3 = quantia - (ganhador1 + ganhador2);

        printf("O primeiro irá ganhar: %.2f, o segundo irá ganhar: %.2f e o terceiro: %.2f", ganhador1, ganhador2, ganhador3);

        return 0;
    }
