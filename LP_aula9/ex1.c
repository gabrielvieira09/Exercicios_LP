#include <stdio.h>

int multi3(int *y);

int main(void) {
  int x = 5;
  printf("X antes: %d\n", x);

  multi3(&x);
  
  printf("Resultado: %d\n", x);

  printf("X depois: %d\n", x);
  return 0;
}

int multi3(int *y) {
  *y = *y * 3;
}