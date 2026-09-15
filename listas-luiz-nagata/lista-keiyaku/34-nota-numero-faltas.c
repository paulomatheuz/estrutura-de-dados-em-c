    /* Enunciado:
    * Leia a nota e o número de faltas de um aluno e informe seu conceito.
    * Quando o aluno tiver mais de 20 faltas, seu conceito é reduzido conforme a tabela:
    * Nota	                       Conceito: até 20 faltas      	Conceito: mais de 20 faltas
    * De 9,0 até 10,0	                    A                               	B
    * De 7,5 até 8,9	                    B                               	C
    * De 5,0 até 7,4	                    C	                                D
    * De 4,0 até 4,9                     	D                               	E
    * De 0,0 até 3,9	                    E                               	E
    * Valide a nota, que deve estar entre 0 e 10, e o número de faltas, que não pode ser negativo.
    */
#include <stdio.h>

    int main() {
        float nota;
        int faltas;
        char conceito;

        printf("Digite a nota: ");
        scanf("%f", &nota);
        printf("Digite o numero de faltas: ");
        scanf("%d", &faltas);

        if (nota < 0.0 || nota > 10.0 || faltas < 0) {
            printf("Dados invalidos!\n");
            return 0;
        }

        if (nota >= 9.0) {
            conceito = faltas <= 20 ? 'A' : 'B';
        } else if (nota >= 7.5) {
            conceito = faltas <= 20 ? 'B' : 'C';
        } else if (nota >= 5.0) {
            conceito = faltas <= 20 ? 'C' : 'D';
        } else if (nota >= 4.0) {
            conceito = faltas <= 20 ? 'D' : 'E';
        } else {
            conceito = 'E';
        }

        printf("Conceito: %c\n", conceito);
        return 0;
    }
