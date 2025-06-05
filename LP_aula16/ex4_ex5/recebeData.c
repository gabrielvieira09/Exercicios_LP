#include <stdio.h>
#include <string.h>

int main() {
    char data[11]; 
    char hora[6];

    FILE *pArquivo = NULL;

    pArquivo = fopen("remedios.txt", "a");

    if(pArquivo == NULL){
        printf("O arquivo não foi aberto!");

    }else{

    printf("Data: ");
    scanf("%s", data);

    printf("Hora: ");
    scanf("%s", hora);

    getchar();
    
    fprintf(pArquivo, "Data: %s Hora: %s", data, hora);


    printf("Data e hora recebidas: %s %s\n", data, hora);

    }

    fclose(pArquivo);

    return 0;
}
