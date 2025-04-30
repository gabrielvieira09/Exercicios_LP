#include <stdio.h>
#include <string.h>

int main() {
  char completo[50];
  char sobrenome[50];
  char espaco[] = " ";

  printf("Digite o seu nome: ");
  scanf("%49s", completo);

  printf("Digite o seu sobrenome: ");
  scanf("%49s", sobrenome);

  strcat(completo, espaco);
  strcat(completo, sobrenome);

  printf("Nome completo: %s\n", completo);

  return 0;
}