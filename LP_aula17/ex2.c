#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  
  char *mostra = getenv("QUERY_STRING");
  printf( "Content-type: text/html\n\n" );

  char *pos_igual = strchr(mostra, '=');
  printf("Nascimento recebido: %s\n", pos_igual + 1);

  return 0;
}