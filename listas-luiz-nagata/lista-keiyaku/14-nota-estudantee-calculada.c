/* Enunciado:
 * A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
 * de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
 * e a um exame final. A média das três notas mencionadas anteriormente obedece aos
 * pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
 * com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
 * recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
 */
#include <stdio.h>

    int main() {
        float nota1, nota2, nota3, nota_final;

        printf("Digite a nota do Trabalho de Laboratorio (0 a 10): ");
        scanf("%f", &nota1);

        printf("Digite a nota da Avaliacao Semestral (0 a 10): ");
        scanf("%f", &nota2);

        printf("Digite a nota do Exame Final (0 a 10): ");
        scanf("%f", &nota3);

        if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
            printf("\nErro: Todas as notas devem estar entre 0 e 10.\n");
            return 1; 
        }

        nota_final = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

        printf("\nMedia Final: %.2f\n", nota_final);

        if (nota_final >= 0.0 && nota_final <= 2.9) {
            printf("Situacao: Reprovado\n");
        } else if (nota_final >= 3.0 && nota_final <= 4.9) {
            printf("Situacao: De recuperacao\n");
        } else if (nota_final >= 5.0 && nota_final <= 10.0) {
            printf("Situacao: Aprovado\n");
        } else {
            printf("Situacao: Nota invalida fora do escopo.\n");
        }

        return 0;
    }