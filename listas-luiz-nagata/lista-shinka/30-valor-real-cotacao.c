/* Enunciado:
 * Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente
 * em dólares.
 */
#include <stdio.h>

    int main() {
        float real, dolar, valor_em_dolar;

        printf("Digite o valor em real (R$): ");
        scanf("%f", &real);

        printf("Digite a cotacao do dolar: ");
        scanf("%f", &dolar);

        valor_em_dolar = real / dolar;

        printf("O valor convertido para dolar e de: U$ %.2f\n", valor_em_dolar);

        return 0;  
    }