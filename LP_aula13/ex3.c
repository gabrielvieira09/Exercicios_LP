#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra1 [20], palavra2[20];
    int anagrama = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra1);

    printf("Digite outra palavra: ");
    scanf("%s", palavra2);

    int tamanho1 = strlen(palavra1);
    int tamanho2 = strlen(palavra2);

    if(tamanho1 == tamanho2) {
        for (int i = 0; i < tamanho1; i++) {
            int encontrado = 0;
            for (int j = 0; j < tamanho2; j++) {
                if (palavra1[i] == palavra2[j]) {
                    palavra2[j] = '\0';
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                anagrama = 0;
                break;
            }
        }
    }else{
        anagrama = 0;
    }

    if(anagrama) {
        printf("É um anagrama\n");
    } else {
        printf("Não é um anagrama\n");
    }

    return 0;

}

