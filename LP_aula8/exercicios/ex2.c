#include <stdio.h>

int main() {
    int dado;
    int pontos = 0;
    
    do{
        printf("digite o valor do dado:");
        scanf("%d", &dado);
        
        if(dado % 2 == 0){
            pontos += dado;
        }else{
            break;
        }
    }while(1);
    
    printf("Total de pontos: %d.", pontos);

    return 0;
}