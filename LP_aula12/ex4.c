#include <stdio.h>
#include <string.h>

int main() {
  char palavra[6];
  char letra;
  char * posicao;
  int tentativas = 3;
  
  printf("Digite uma palavra: ");
  scanf("%5s", palavra);
  getchar();
  
  printf("Digite uma letra: ");
  letra = getchar();
  getchar();
  
  while(tentativas > 0){
      
  posicao = strchr(palavra, letra);
  
  if( posicao != NULL ) {
    printf("A letra foi encontrada na palavra!\n");
  } else {
    printf("A letra não foi encontrada!\n");
  }
  
    tentativas--;

    if(tentativas == 0){
        break;
    }
    printf("Você tem mais %d tentativas\n", tentativas);

    printf("Digite uma letra: ");
    letra = getchar();
    getchar();

  }

  printf("Acabaram as suas tantativas!\n");
  
  return 0;
}  