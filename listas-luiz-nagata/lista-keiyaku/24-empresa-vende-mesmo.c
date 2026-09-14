/* Enunciado:
 * Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
 * possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
 * 8%). Faça um programa em que o usuário entre com o valor e o estado destino do
 * produto e o programa retorne o preço final do produto acrescido do imposto do estado
 * em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem
 * de erro.
 */
#include <stdio.h>
#include <string.h>

int main() {
    float valor, valor_final;
    char destino[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite o destino do produto (MG, SP, RJ, MS): ");
    scanf("%2s", destino);

    if (strcmp(destino, "MG") == 0) {
        valor_final = valor * 1.07f;
        printf("O valor final para MG e: %.2f\n", valor_final);
    } else if (strcmp(destino, "SP") == 0) {
        valor_final = valor * 1.12f;
        printf("O valor final para SP e: %.2f\n", valor_final);
    } else if (strcmp(destino, "RJ") == 0) {
        valor_final = valor * 1.15f;
        printf("O valor final para RJ e: %.2f\n", valor_final);
    } else if (strcmp(destino, "MS") == 0) {
        valor_final = valor * 1.08f;
        printf("O valor final para MS e: %.2f\n", valor_final);
    } else {
        printf("Estado invalido!\n");
    }

    return 0;
}
