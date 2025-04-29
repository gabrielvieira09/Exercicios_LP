#include <stdio.h>

int media(int n[], int tamanho);
int dobro(int n[], int tamanho);
int maior(int n[]);

int main(){

    int vetor[2] = {2, 10};

    printf("Media: %d\n", media(vetor, 2));
    printf("Media do Dobro: %d\n\n", dobro(vetor, 2));

    printf("Antes: %d %d\n", vetor[0], vetor[1]);
    maior(vetor);
    printf("Depois: %d %d\n", vetor[0], vetor[1]);


    return 0;
}

int media(int n[], int tamanho){
    int total = 0;
    for(int i = 0; i < tamanho; i++){
        printf("Vetor[%d] = %d\n", i, n[i]);
        total += n[i];
    }

    return total/tamanho;
}

int dobro(int n[], int tamanho){
    int total = 0;
    for(int i = 0; i < tamanho; i++){
        n[i] *= 2;
        printf("Vetor[%d] = %d\n", i, n[i]);
        total += n[i];
    }

    return total/tamanho;

}

int maior(int n[]){
    
    if(n[1] > n[0]){
        int aux = n[0];
        n[0] = n[1];
        n[1] = aux;
    }

    return 0;
}