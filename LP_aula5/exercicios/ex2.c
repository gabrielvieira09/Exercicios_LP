#include <stdio.h>

int main(void){
    
    int n1;
    int n2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    printf("O maior número é: %d", (n1>n2) ? n1:n2 );
    
    return 0;
}