#include <stdio.h>

struct filme {
    char nome[50];
    int classIndicativa;
    double avaliacao;
};

int main(void) {
  struct filme retorno;

  FILE *pArquivo;
  pArquivo = fopen("filme.txt", "rb");

  fread(&retorno, sizeof(struct filme), 1, pArquivo);

  fclose(pArquivo);

  printf("Nome: %s\n", retorno.nome);
  printf("Classificação Indicativa: %d anos\n", retorno.classIndicativa);
  printf("Avaliação (0 a 5): %.1f estrelas\n", retorno.avaliacao);

  return 0;
}  