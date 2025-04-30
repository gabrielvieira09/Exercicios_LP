#include <stdio.h>
int main() {

char nome[8] = "gabriel";

printf("Nome: %s\n", nome);

for(int i = 0; i<8; i++){
printf(" * %c", nome[i]);
}

printf("\n");

return 0;
}

