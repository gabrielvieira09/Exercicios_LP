#include <stdio.h>
#include "igualdade.h"

int numero(int x);

int main(){
    int n1, n2, n3, a, b;

    n1 = numero(n1);
    n2 = numero(n2);
    n3 = numero(n3);

    a = maior(n1, n2);
    b = maior(a, n3);

    printf("Maior: %d\n", b);

    return 0;
}

int numero(int x){
    printf("Digite um numero: ");
    scanf("%d", &x);
    return x;
}