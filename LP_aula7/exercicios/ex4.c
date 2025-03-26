#include <stdio.h>

int main() {
    
    int escolha;
    float total;
    int b = 0;
    int h = 0;
    int s = 0;
    int c = 0;
    
    printf("--------------------\n");
    printf("1 Batata     R$10,00\n");
    printf("2 Hamburguer R$15,00\n");
    printf("3 Suco       R$ 9,00\n");
    printf("4 Combo      R$30,00\n");
    printf("--------------------\n");
    
    printf("Digite o número da escolha ( 5 para encerrar ): ");
    scanf("%d", &escolha);
    
    while(escolha != 5){
        switch(escolha){
            case 1:
                b++;
                break;
            case 2:
                h++;
                break;
            case 3:
                s++;
                break;
            case 4:
                c++;
                break;
            default:
                printf("\nEscolha um número valido do cardápio!\n\n");
                break;
        }
    
        printf("Digite o número da escolha ( 5 para encerrar ): ");
        scanf("%d", &escolha);
    }
        total = b*10+h*15+s*9+c*30;
    
        printf("\nBatata:        %d vendidos\n", b);
        printf("Hamburguer:    %d vendidos\n", h);
        printf("Suco:          %d vendidos\n", s);
        printf("Combo:         %d vendidos\n", c);
        printf("--------------------------\n");
        printf("Total:         %d itens\n",b+h+s+c);
        printf("Valor Total:   R$%.2f ",total);
    return 0;
}