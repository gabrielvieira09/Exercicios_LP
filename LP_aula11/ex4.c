#include <stdio.h>

int soma(int n[], int tamanho);

int main() {
  int vetor[3];

  for(int i = 0; i < 3; i++) {
    printf("Digite o %dº numero: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  int resultado = soma(vetor, 3);

  printf("Soma: %d\n", resultado);
}

int soma(int n[], int tamanho) {
  int total = 0;

  for(int i = 0; i < tamanho; i++) {
    total += n[i];
  }
  return total;
}