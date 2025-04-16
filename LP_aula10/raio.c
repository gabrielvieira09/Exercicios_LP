#include <stdio.h>
#include "util.h"

int main(){

    double raio, valorDiametro, valorComprimento, valorArea;
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    valorDiametro = diametro(raio);
    printf("Valor do Diâmetro: %lf\n", valorDiametro);

    valorComprimento = comprimento(raio);
    printf("Valor do Comprimento: %lf\n", valorComprimento);

    valorArea = area(raio);
    printf("Valor da Área: %lf\n", valorArea);

    return 0;
}