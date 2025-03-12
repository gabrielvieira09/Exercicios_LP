#include <stdio.h>

int main() {
    float peso, altura;
    int imc;
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso/(altura * altura);
    
    if(imc > 40){
        puts("Obesidade classe III");
    }else{
        if(imc >= 35){
            puts("Obesidade classe II");
        }else{
            if(imc >= 30){
                puts("Obesidade classe I");
            }else{
                if(imc >= 25){
                    puts("Sobrepeso");
                }else{
                    if(imc >= 25){
                        puts("Sobrepeso");
                    }else{
                        if(imc >= 18.5){
                            puts("Intervalo Normal");
                        }else{
                            puts("Baixo peso");
                        }
                    }
                }
            }
        }
    }
    return 0;
}