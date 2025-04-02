#include <stdio.h>

int main() {
    int escolha;
    int contador = 1;
    
    do{
        printf("digite um número:");
        scanf("%d", &escolha);
        
        if(escolha == 7){
            printf("\nVocê ganhou!\n");
            contador = 3;
        }else{
            if(contador != 3){
                printf("Número errado.\n");
                printf("Tentativas restantes: %d.\n", 3-contador);
            }else{
                printf("Número errado.\n");
                printf("\nFim de jogo!");
            }
        }
        
        contador++;
    }while(contador<=3);

    return 0;
}