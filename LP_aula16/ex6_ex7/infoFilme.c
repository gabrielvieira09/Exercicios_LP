#include <stdio.h>

struct filme {
    char nome[50];
    int classIndicativa;
    double avaliacao;
};

int main(void){

    struct filme infomarcao;

    printf("Digite o nome do filme: ");
    scanf("%49s", infomarcao.nome);

    printf("Digite a classificação indicativa deste filme: ");
    scanf("%d", &infomarcao.classIndicativa);

    printf("Digita qual é a avaliação do filme {0 a 5}: ");
    scanf("%lf", &infomarcao.avaliacao);

    FILE *pArquivo;
    pArquivo = fopen("filme.txt", "wb");

    fwrite(&infomarcao, sizeof(struct filme), 1, pArquivo);

    fclose(pArquivo);

    return 0;
}