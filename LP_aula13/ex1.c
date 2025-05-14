#include <stdio.h>
#include <string.h>

int main(){

    char palavra[11];
    int j;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%10s", palavra);

    int tamanho = strlen(palavra);
    j = tamanho - 1;

    for(int i = 0; i < j; i++, j--){
        
        if(palavra[i] != palavra[j]){

            palindromo = 0;
            break;
        }
    }

    if(palindromo){
        printf("É um PALÍNDROMO!!\n");
    } else{
        printf("Não é um PALÍNDROMO\n");
    }

    return 0;
}