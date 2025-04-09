#include <stdio.h>

int subtrai3(int x){
    return x - 3;
}

int main() {
    
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    printf("Recebido: %d\n",numero);
    
    int resultado = subtrai3(numero);
    printf("Resultado: %d\n", resultado);
    
    printf("Atual: %d", numero);

    return 0;
}