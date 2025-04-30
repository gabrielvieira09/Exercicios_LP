#include <stdio.h>

int main(){
    
    int numero;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i = 0; i < numero; i++){

        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }

    printf("Soma: %d\n", soma);

    return 0;
}