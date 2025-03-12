#include <stdio.h>

int main() {

    float imc;
    
    printf("Digite seu imc: ");
    scanf("%f", &imc);
    
    if(imc >= 18.5){
        if(imc < 24.9){
            puts("Intervalo NORMAL");
        }else{
            puts("Acima do intervalo normal");
        }
    }else{
        puts("Abaixo do intervalo normal");
    }
    return 0;
}