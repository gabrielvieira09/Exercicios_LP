#include <stdio.h>

int main() {
    
    int soma = 0;
    float total = 0;
    float nota, media;
    
    printf("(Escreva -5 caso queira sair) Digite uma nota: ");
    scanf("%f", &nota);
    
    while( nota != -5 ) {
        soma++;
        total += nota;
        
        printf("(Escreva -5 caso queira sair) Digite uma nota: ");
        scanf("%f", &nota);
        
    }
    media = total/soma;
    
    printf("A sua média é: %.2f", media);

    return 0;
}