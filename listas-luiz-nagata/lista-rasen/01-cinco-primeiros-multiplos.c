/* Enunciado:
 * Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, conside-
 * rando números maiores que 0.
 */
 #include <stdio.h>

    int main() {
        int i;

        for (i = 1; i <= 5; i++) {
            printf("%d\n", i * 3);
        }

        return 0;
    }
