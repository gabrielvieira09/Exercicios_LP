#include <stdio.h>

int main() {
    
    int valor;
    int soma = 0;
    
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    for(int n = 0; n <= valor; n ++){
        if(n % 2 == 1){
            soma += n;
        }
    }
    printf("A soma de todos os números impares até %d é: %d", valor, soma);
    
    return 0;
}