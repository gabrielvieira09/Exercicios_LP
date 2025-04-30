#include <stdio.h>

int main() {
char senha[6] = "azimo";
char tentativa[6];
int chances = 3;
int correta;

while (chances > 0) {
    printf("Digite a senha: ");
    scanf("%5s", tentativa);

    correta = 1;
    for (int i = 0; i < 5; i++) {
        if (tentativa[i] != senha[i]) {
        correta = 0;
        break;
        }
    }   

    if (correta) {
        printf("Seja bem vindo!\n");
        return 0;
    } else {
        chances--;
        if (chances > 0) {
            printf("Senha errada. Tentativas restantes: %d\n", chances);
        }
    }
}

printf("Tente novamente mais tarde.\n");
return 0;
}

