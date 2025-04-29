#include <stdio.h>

int main(){

    float notas[4];
    float total = 0;

    for(int n = 0; n < 4; n++){
        printf("Digite a %dº nota: ", n + 1);
        scanf("%f", &notas[n]);
        
        total += notas[n];

    }

    printf("Total das notas: %.2f\n", total);

    return 0;
}