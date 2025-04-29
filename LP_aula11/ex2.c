#include <stdio.h>

#define PI 3.14159

int main(){

    float raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    printf("A área do criculo é: %.2f\n", PI * raio * raio);

    return 0;

}