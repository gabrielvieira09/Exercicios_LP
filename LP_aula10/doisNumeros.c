#include <stdio.h>
#include "igualdade.h"

int main(){

    int n1, n2, numeroIgual;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    numeroIgual = iguais(n1, n2);
    if(numeroIgual == 1){
         printf("Iguais: sim\n");
    }else{
        printf("Iguais: nao\n");

        printf("Maior: %d\n", maior(n1, n2));

        printf("Menor: %d\n", menor(n1, n2));
    }  

    return 0;
}

