#include <stdio.h>

int testa_par(int x){
    if(x % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int numero1 = testa_par(1);
    int numero2 = testa_par(2);
    int numero3 = testa_par(3);
    int numero4 = testa_par(4);
    
    printf("1 é par ? %d\n", numero1);
    printf("2 é par ? %d\n", numero2);
    printf("3 é par ? %d\n", numero3);
    printf("4 é par ? %d\n", numero4);

    return 0;
}