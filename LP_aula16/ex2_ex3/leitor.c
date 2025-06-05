#include <stdio.h>
#include <string.h>

int main() {
    char titulo[100], personagem[100];
    char opcao;
    FILE *pArquivo;

    printf("Digite o titulo do livro: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = 0;

    pArquivo = fopen(titulo, "r");
    if (pArquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while (1) {
        printf("Aperte P para ler um personagem, F para finalizar: ");
        scanf(" %c", &opcao);

        if (opcao == 'P' || opcao == 'p') {
            if (fgets(personagem, sizeof(personagem), pArquivo) != NULL) {
                personagem[strcspn(personagem, "\n")] = 0;
                printf("Personagem: %s\n", personagem);
            } else {
                printf("Fim do arquivo.\n");
                break;
            }
        } else if (opcao == 'F' || opcao == 'f') {
            break;
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }
    }

    fclose(pArquivo);
    return 0;
}
