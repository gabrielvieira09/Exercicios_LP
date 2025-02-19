#include <stdio.h>

int main() {
  char letra = 'Y';
  char proxima1 = letra + 1;
  char proxima2 = proxima1 + 1;
  char proxima3 = proxima2 + 1;
  char proxima4 = proxima3 + 1;
  char proxima5 = proxima4 + 1;
  char proxima6 = proxima5 + 1;
  char proxima7 = proxima6 + 1;
  char proxima8 = proxima7 + 1;
  char proxima9 = proxima8 + 1;
  char proxima10 = proxima9 + 1;
  printf("Letra: %c \n", letra);
  printf("Proxima depois de: %c é %c \n", letra, proxima1);
  printf("Proxima depois de: %c é %c \n ", proxima1, proxima2);
  printf("Proxima depois de: %c é %c \n", proxima2, proxima3);
  printf("Proxima depois de: %c é %c \n", proxima3, proxima4);
  printf("Proxima depois de: %c é %c \n", proxima4, proxima5);
  printf("Proxima depois de: %c é %c \n", proxima5, proxima6);
  printf("Proxima depois de: %c é %c \n", proxima6, proxima7);
  printf("Proxima depois de: %c é %c \n", proxima7, proxima8);
  printf("Proxima depois de: %c é %c \n", proxima8, proxima9);
  printf("Proxima depois de: %c é %c \n", proxima9, proxima10);
  return 0;
}  