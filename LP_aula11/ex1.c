#include <stdio.h>

#define NUM 5

int main(){

    int numeros[NUM] = {1, 2, 3, 4, 5};

    for(int i = 0; i < NUM; i++){
        printf("Numero[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}