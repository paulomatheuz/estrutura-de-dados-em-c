/* Enunciado:
 * Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
 * aposentar. As condições para aposentadoria são
 * • Ter pelo menos 65 anos,
 * • Ou ter trabalhado pelo menos 30 anos,
 * • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
 */
#include <stdio.h>

    int main() {
        int idade;
        float tempo_servico_anos;

        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite o tempo de serviço em anos: ");
        scanf("%f", &tempo_servico_anos);

        if (idade >= 65) {
            printf("Você pode se aposentar!");
        }
        else if (tempo_servico_anos >= 30) {
            printf("Você pode se aposentar!");
        }
        else if (idade >= 60 && tempo_servico_anos >= 25) {
            printf("Você pode se aposentar!");
        }
        else {
            printf("Você não pode se aposentar!");
        }

        return 0;
    }