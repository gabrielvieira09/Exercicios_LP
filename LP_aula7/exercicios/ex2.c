#include <stdio.h>

int main() {
    
    char tamanho;
    int camisaP = 0;
    int camisaM = 0;
    int camisaG = 0;

    printf("Digite abaixo o tamanho da camisa. (F para encerrar) \n");
    tamanho = getchar();
    getchar();
    
    while( tamanho != 'F'){
        switch(tamanho){
            case 'P':
                camisaP++;
                break;
            case 'M':
                camisaM++;
                break;  
            case 'G':
                camisaG++;
                break;
            default:
                printf("tamanho não encontrado!\n");
                break;    
        }
        
    printf("Digite abaixo o tamanho da camisa. (F para encerrar) \n");
    tamanho = getchar();
    getchar();
    }
    
    printf("TOTAL camisas ( P: %d M: %d G: %d )", camisaP, camisaM, camisaG);
    
    return 0;
}