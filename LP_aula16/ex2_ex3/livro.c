#include <stdio.h>
#include <string.h>

int main(void){

    FILE *pArquivo = NULL;
    char titulo_do_livro[50], name[50];

    printf("Qual o título do livro?\n");
    scanf("%s", titulo_do_livro);

    pArquivo = fopen(titulo_do_livro, "w");

    printf("Digite o nome do personagem: {nome do personagem} / N\n");

    getchar();

    while(fgets(name, sizeof(name), stdin)){

        if(strcmp(name, "N\n") == 0)
            break;
        fputs(name, pArquivo);

        printf("Digite o nome do personagem: {nome do personagem} / N\n");
    }

    fclose(pArquivo);

    return 0;
}