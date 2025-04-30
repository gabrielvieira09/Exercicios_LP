#include <stdio.h>
#include <string.h>

int main() {
  char senha[20];
  printf("Digite a senha: ");
  scanf("%19s", senha);

  int tamanho = strlen(senha);

  if(tamanho >= 8 ){
    printf("Senha Conforme!\n");
  }else{
    printf("Erro na senha!\n");
  }

  return 0;
}  