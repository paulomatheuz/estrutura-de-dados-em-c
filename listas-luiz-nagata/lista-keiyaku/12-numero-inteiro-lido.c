/* Enunciado:
 * Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
 * inválido”. Se o número for positivo, calcular o logaritmo deste numero.
 */
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    float log_natural, log_base10;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Número inválido!\n");
    } else {
        log_natural = log(num);
        log_base10 = log10(num);
        
        printf("Logaritmo Natural (base e) de %d = %.2f\n", num, log_natural);
        printf("Logaritmo na Base 10 de %d = %.2f\n", num, log_base10);
    }

    return 0;
}