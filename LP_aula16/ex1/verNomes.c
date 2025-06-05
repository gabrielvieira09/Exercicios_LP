#include <stdio.h>

int main(void){

    FILE *pArquivo = NULL;
    pArquivo = fopen("nomes.txt", "r");
    char destino[80];

    while(fgets(destino, sizeof(destino), pArquivo) != NULL){   
        printf("%s", destino);
    }


    fclose(pArquivo);

    return 0;
}