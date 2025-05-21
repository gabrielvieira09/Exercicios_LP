#include <stdio.h>
#include <math.h>

float calcular_tempo_queda(float altura){
    float gravidade = 9.81;
    float tempo = sqrt((2 * altura) / gravidade);
    return tempo;
};

float calcular_distancia_liberacao(float velocidade, float altura){
    float tempo = calcular_tempo_queda(altura);
    float distancia = velocidade * tempo;
    return distancia;
};

int main(){

    float altura;
    float velocidade;

    printf("Digite a altura do Avião: ");
    scanf("%f", &altura);

    printf("Digite a velocidade do Avião: ");
    scanf("%f", &velocidade);

    printf("A disrtancia que deve ser depositado o Objeto é: %.2fm\n", calcular_distancia_liberacao(velocidade, altura));
    printf("O tempo de queda é: %.2fs\n", calcular_tempo_queda(altura));

    return 0;
}