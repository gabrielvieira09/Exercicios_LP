#include <stdio.h>

int main() {
    float nota;

    printf("Digite a sua nota: ");
    scanf("%f", &nota);
    
    if(nota >= 9){
        puts("Conceito: A");
    }else{
        if(nota >= 8){
            puts("Conceito: B");
        }else{
            if(nota >= 7){
                puts("Conceito: C");
            }else{
                if(nota >= 6){
                    puts("Conceito: D");
                }else{
                    puts("Conceito: F");
                }
            }
        }
    }
    
    return 0;
}