#include <stdio.h>
#include <string.h>

int main() {
    
    char senha[6] = "azimo";
    char usuario[6];
    int tentativas = 3;   

    while(tentativas > 0){

        printf("Digite sua senha: ");
        scanf("%s", usuario);

        int resultado = strcmp(senha, usuario);

        if(resultado == 0){
            printf("Seja bem vindo!\n");
        break;
        }else{
            printf("Senha errada! ");
            tentativas--;
            printf("Tentativas restantes: %d\n", tentativas);

            if(tentativas == 0){
                printf("Tente novamente mais tarde!\n");
            }
        }
    }
  return 0;
}
