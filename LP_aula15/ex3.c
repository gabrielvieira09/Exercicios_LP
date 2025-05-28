#include <stdio.h>

int abertura(FILE * arquivo);
int fechamento(FILE * arquivo);

int retangulo(FILE * pArquivo);
int circulo(FILE * pArquivo);
int linha(FILE * pArquivo);
int texto(FILE * pArquivo);


int main(void){

    char nomeArquivo[100];
    FILE * pArquivo = NULL;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);


    pArquivo = fopen(nomeArquivo, "w");

    if (pArquivo == NULL) {
        printf("O arquivo não foi aberto!");
    } else {

        char escolha;

        printf("Vamos criar desenhos:\n");
        printf("Digite (r) para retângulo, (c) para circulo, (l) para linha, (t) para texto e (f) para fechar\n");
        getchar();
        scanf("%c", &escolha);

        int resultado = abertura(pArquivo);
        if (resultado) {
        
        while(escolha != 'f') {
            if (escolha == 'r') {
                resultado = retangulo(pArquivo);
            } else if (escolha == 'c') {
                resultado = circulo(pArquivo);
            } else if (escolha == 'l') {
                resultado = linha(pArquivo);
            } else if (escolha == 't') {
                resultado = texto(pArquivo);
            } else {
                printf("Escolha invalida!");
            } 

            printf("Vamos criar desenhos:\n");
            printf("Digite (r) para retângulo, (c) para circulo, (l) para linha, (t) para texto e (f) para fechar\n");
            getchar();
            scanf("%c", &escolha);
        }

        printf("Fim do desenho!\n");

        if (resultado) {
            resultado = fechamento(pArquivo);
        }
        } else {
        printf("Erro ao gravar no arquivo.");
        }
    }

    fclose(pArquivo);

    return 0;
}


int abertura(FILE * arquivo) {
    int retorno = fprintf(arquivo, "<svg version=\"1.1\" ");

    if (retorno < 0) {
      return 0;
    }

    retorno = fprintf(arquivo, "width=\"300\" height=\"200\" ");

    if (retorno < 0) {
      return 0;
    }

    retorno = fprintf(arquivo, "xmlns=\"http://www.w3.org/2000/svg\">");

    if (retorno < 0) {
      return 0;
    }

    return 1;
  }

int fechamento(FILE * arquivo) {
  int retorno = fprintf(arquivo, "</svg>");

  if (retorno < 0) {
    return 0;
  }

  return 1;
}  

int retangulo(FILE * pArquivo){

    int x, y, w, h;

    printf("Digite o valor do x: ");
    scanf("%d", &x);

    printf("Digite o valor do y: ");
    scanf("%d", &y);

    printf("Digite o valor do width: ");
    scanf("%d", &w);

    printf("Digite o valor do height: ");
    scanf("%d", &h);


    int retorno = fprintf(pArquivo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />", x, y, w, h);

    if (retorno < 0) {
        return 0;
    }

    return 1;
}

int circulo(FILE * pArquivo){
    int x, y, r;

    printf("Digite o valor do x: ");
    scanf("%d", &x);

    printf("Digite o valor do y: ");
    scanf("%d", &y);

    printf("Digite o valor do raio: ");
    scanf("%d", &r);

    int retorno = fprintf(pArquivo, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\"/>", x, y, r);

    if (retorno < 0) {
        return 0;
    }

    return 1;
}

int linha(FILE * pArquivo){
    int x1, y1, x2, y2;

    printf("Digite o valor do x1: ");
    scanf("%d", &x1);

    printf("Digite o valor do y1: ");
    scanf("%d", &y1);

    printf("Digite o valor do x2: ");
    scanf("%d", &x2);

    printf("Digite o valor do y2: ");
    scanf("%d", &y2);

    int retorno = fprintf(pArquivo, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"black\" />", x1, y1, x2, y2);

    if (retorno < 0) {
        return 0;
    }

    return 1;

}

int texto(FILE * pArquivo){
    int x, y;
    char escrever[100];

    printf("Digite o valor do x: ");
    scanf("%d", &x);

    printf("Digite o valor do y: ");
    scanf("%d", &y);

    printf("Digite o texto: ");
    scanf(" %s", escrever);

    int retorno = fprintf(pArquivo, "<text x=\"%d\" y=\"%d\" fill=\"red\">%s</text>", x, y, escrever);

    if (retorno < 0) {
        return 0;
    }

    return 1;
}
