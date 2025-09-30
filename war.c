#include <stdio.h>
#include <string.h>

/*
   Definição da struct Territorio:
   Agrupa informações relacionadas a um território:
   - nome: nome do território (até 30 caracteres)
   - cor: cor do exército (até 10 caracteres)
   - tropas: quantidade de tropas
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor que armazenará os 5 territórios
    struct Territorio territorios[5];

    // Cadastro dos territórios
    for (int i = 0; i < 5; i++) {
        printf("\n=== Cadastro do Território %d ===\n", i + 1);

        printf("Digite o nome do território: ");
        scanf(" %29[^\n]", territorios[i].nome); // lê até 29 caracteres, aceita espaços

        printf("Digite a cor do exército: ");
        scanf(" %9s", territorios[i].cor); // lê até 9 caracteres (sem espaços)

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados
    printf("\n===== Lista de Territórios Cadastrados =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
