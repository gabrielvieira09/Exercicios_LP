#include <stdio.h>

int main() {
    
    int n;
    int l = 0;
    int e = 0;
    int s = 0;

    printf("Digite 1 para Lavar, Enxaguar e secar.\n");
    printf("Digite 2 para Enxaguar e Secar.\n");
    printf("Digite 3 para Secar.\n");
    printf("(Digite 4 para Desligar a máquina)\n");
    scanf("%d", &n);
    
    while(n != 4){
        switch(n){
            case 1:
                printf("\nLavando...\n");
                l++;
            case 2:
                printf("\nEnxaguando...\n");
                e++;
            case 3:
                printf("\nSecando...\n\n");
                s++;
        }
        
        printf("Digite 1 para Lavar, Enxaguar e secar.\n");
        printf("Digite 2 para Enxaguar e Secar.\n");
        printf("Digite 3 para Secar.\n");
        printf("(Digite 4 para Desligar a máquina)\n");
        scanf("%d", &n);
    }
    printf("Máquina desligada\n");
    printf("Foi lavado %d vez(es), enxaguado %d vez(es), secado %d vez(es)", l, e, s);
    
    return 0;
}
