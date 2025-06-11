#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  char *mostra = getenv("QUERY_STRING");
  printf( "Content-type: text/html\n\n" );
  
  char *pos_igual = strchr(mostra, '=');
  pos_igual = pos_igual + 1;
  int numero = atoi(pos_igual);

  int anos = 2025-numero ;

  printf("Se passou %d anos", anos);

  return 0;
}