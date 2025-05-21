#include <stdio.h>
#include <string.h>

char inverter_string(char *str, int valor){

    char troca;

    for(int i = 0; i < valor / 2 ; i++){
        troca = str[i];
        str[i] = str[valor - i - 1];
        str[valor - i - 1] = troca;
    }

    return 0;
}


int main(){

    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    int tamanho = strlen(palavra);

    inverter_string(palavra, tamanho);

    printf("A palavra invertida é: %s\n", palavra);
    
    return 0;
}