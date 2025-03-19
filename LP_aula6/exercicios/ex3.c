#include <stdio.h>

int main() {
    
    int a, b, c, primeiro, segundo, terceiro;

    while(1){
        printf("Digite três valores inteiros (-1 para sair): ");
        scanf("%d", &a);

        if(a == -1){
            return 0;
        }

        scanf("%d %d", &b, &c);

        primeiro = a;
        segundo = b;
        terceiro = c;

        if(b > primeiro){
            primeiro = b;
            segundo = a;
            terceiro = c;
        }

        if(c > primeiro){
            primeiro = c;
            segundo = a;
            terceiro = b;
        }

        if (primeiro * primeiro == segundo * segundo + terceiro * terceiro){
            printf("PODE formar um triângulo retângulo!!");
        }else{
            printf("NÃO pode formar um triângulo retângulo!!");
        }
        
    }
    return 0;
}