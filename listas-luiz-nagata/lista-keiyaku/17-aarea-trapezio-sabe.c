/* Enunciado:
 * Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
 * A = (basemaior + basemenor)∗ altura / 2
 * Lembre-se a base maior e a base menor devem ser números maiores que zero.
 */
#include <stdio.h>
    int main() {
    float base_maior, base_menor, altura, area_trapezio;

    printf("Digite o valor da base menor: ");
    scanf("%f", &base_menor);
    printf("Digite o valor da base maior: ");
    scanf("%f", &base_maior);
    printf("Digite o valor da base maior: ");
    scanf("%f", &altura);
    

    if (base_maior > 0 && base_menor > 0) {
        area_trapezio = (base_maior + base_menor) * altura / 2;
        printf("A area do trapezio e de: %.2f", area_trapezio);
    } else {
        printf("Valor invalido!");
    }
    
    return 0;
    }
