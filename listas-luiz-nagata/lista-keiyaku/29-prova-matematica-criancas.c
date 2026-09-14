/* Enunciado:
 * Faça uma prova de matemática para crianças que estão aprendendo a somar números
 * inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na
 * tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a
 * resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
 * corretas, além de quantas vezes o aluno acertou.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main() {
        srand(time(NULL));

        int num1[5], num2[5];
        int respostas_aluno[5], respostas_certas[5];
        int acertos = 0;

        for (int i = 0; i < 5; i++) {
            num1[i] = (rand() % 100) + 1;
            num2[i] = (rand() % 100) + 1;
            respostas_certas[i] = num1[i] + num2[i];

            printf("Pergunta %d: Qual é a soma de %d + %d?\n", i + 1, num1[i], num2[i]);
            printf("Digite a resposta aqui -> ");
            scanf("%d", &respostas_aluno[i]);

            if (respostas_aluno[i] == respostas_certas[i]) {
                printf("Correto!\n\n");
                acertos++;
            } else {
                printf("Incorreto! A resposta correta é %d.\n\n", respostas_certas[i]);
            }
        }
        
        for (int i = 0; i < 5; i++) {
            printf("Questão %d: %d + %d = %d | Sua resposta: %d ", 
                i + 1, num1[i], num2[i], respostas_certas[i], respostas_aluno[i]);

            if (respostas_aluno[i] == respostas_certas[i]) {
                printf("[ACERTOU]\n");
            } else {
                printf("[ERROU]\n");
            }
        }

        printf("\nTotal de acertos: %d de 5 perguntas.\n", acertos);

        return 0;
    }
