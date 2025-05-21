#include <stdio.h>
#include <string.h>

int palindromo(char *a, int valor){

    char *ptrInicio = a;
    char *ptrFinal = &a[valor - 1];

    while(ptrInicio < ptrFinal){
        if(*ptrInicio != *ptrFinal){
            return 0;
        }
        ptrInicio++;
        ptrFinal--;
    }
    return 1;

}

int main(){

    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    int tamanho = strlen(palavra);

    int resultado = palindromo(palavra, tamanho);

    if(resultado == 1){
        printf("É um palindromo!!\n");
    } else {
        printf("Não é um palindromo!!\n");
    }

    return 0;
}