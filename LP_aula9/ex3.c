#include <stdio.h>

void subtrai3(int *x){
    *x = *x - 3;
}

int main(void) {
    
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    printf("Recebido: %d\n",numero);
    
    subtrai3(&numero);
    
    printf("Resultado: %d\n", numero);
    
    printf("Atual: %d", numero);

    return 0;
}