#include <stdio.h>

int main(void) {

    char novoSVG[200];
    int x, y, w, h;

    printf("Digite o nome do arquivo: ");
    scanf("%s", novoSVG);

    printf("Digite a posição x: ");
    scanf("%d", &x);

    printf("Digite a posição y: ");
    scanf("%d", &y);

    printf("Digite a largura: ");
    scanf("%d", &w);

    printf("Digite a altura: ");
    scanf("%d", &h);


  FILE *pArquivo = NULL;

  pArquivo = fopen(novoSVG, "w");

  if( pArquivo == NULL ) {
    printf("O arquivo não foi aberto!");
  } else {
    fprintf(pArquivo, "<svg version=\"1.1\" width=\"300\" height=\"200\" xmlns=\"http://www.w3.org/2000/svg\"><rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" /></svg>", x, y, w, h);
  }
    fclose(pArquivo);

    return 0;
  }  