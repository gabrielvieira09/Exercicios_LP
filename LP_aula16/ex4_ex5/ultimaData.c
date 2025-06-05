//Crie um programa em C que lê o arquivo remedios.txt e mostra somente a última linha com a data e hora:
//Última: 03/06/2025 14:00

#include <stdio.h>
#include <string.h>

int main() {
    FILE *pArquivo;
    char linha[50];

    pArquivo = fopen("remedios.txt", "r");

    if (pArquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while (fgets(linha, sizeof(linha), pArquivo) != NULL) {

    }


    fclose(pArquivo);

    printf("Ultima: %s\n", linha);

    return 0;
}
