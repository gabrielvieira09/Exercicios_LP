#include <stdio.h>

int main() {
    
    int contador = 1;
    float soma = 0;
    float nota, media;
    
    while( contador <= 3 ) {
        printf("Digite a %d nota: ", contador);
        scanf("%f", &nota);
        
        soma += nota;
        contador = contador + 1;
    }
    media = soma/3;
    
    printf("A sua média é: %.2f", media);

    return 0;
}