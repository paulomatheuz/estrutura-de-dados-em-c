/* Enunciado:
 * Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
 * a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
 * e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
 * superior a 60 pontos.
 */
#include <stdio.h>

    int main() {
        float nota1, nota2, nota3, media_ponderada;

        printf("Digite a sua primeira nota: (peso 1)");
        scanf("%f", &nota1);
        printf("Digite a sua segunda nota: (peso 1)");
        scanf("%f", &nota2);
        printf("Digite a sua terceira nota: (peso 2)");
        scanf("%f", &nota3);

        media_ponderada = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / 4;

        printf("A sua media ponderada e: %.2f\n", media_ponderada);

        if (media_ponderada >= 60) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

        return 0;
    }