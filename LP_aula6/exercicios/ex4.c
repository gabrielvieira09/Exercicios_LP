#include <stdio.h>

int main(){

    float diametro, circunferencia, area, raio;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circunferencia = (2 * 3.14 * raio);
    area = 3.14 * (raio * raio);

    printf("O valor do Diâmetro é: %.2f \n", diametro);
    printf("O valor da Circunferência é: %.2f \n", circunferencia);
    printf("O valor da Área é: %.2f \n", area);
}