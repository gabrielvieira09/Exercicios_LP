#include <stdio.h>

int main(){
    
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        printf("O número %d é PAR", numero);
    }
    if(numero % 2 == 1){
        printf("O número %d é IMPAR", numero);
    }
    
    return 0;
}
