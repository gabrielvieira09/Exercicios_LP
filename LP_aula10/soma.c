#include <stdio.h>

int recebeNumero(void);
int soma(int x, int y);
void mensagem(int x);

int main(){

    int n1,n2, resultado;

    n1 = recebeNumero();
    printf("Digitado: %d\n", n1);

    n2 = recebeNumero();
    printf("Digitado: %d\n", n2);

    resultado = soma(n1,n2);
    mensagem(resultado);

    return 0;

}

int recebeNumero(void){
    int x;

    printf("Digite o primeiro numero: ");
    scanf("%d",&x);

    return x;
}

int soma(int x, int y){
    return x + y;
}

void mensagem(int x){
    printf("Resultado da soma: %d\n", x);
}