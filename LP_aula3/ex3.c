#include <stdio.h>

int main(){
    float nota;
    
    printf("Digite a sua nota: ");
    scanf("%f", &nota);
    
    if(nota >= 9){
        printf("A");
        return 0;
    }
    if(nota >= 8){
        printf("B");
        return 0;
    }
    if(nota >= 7){
        printf("C");
        return 0;
    }
    if(nota >= 6){
        printf("D");
        return 0;
    }
    if(nota >= 0){
        printf("F");
        return 0;
    }
    
}
