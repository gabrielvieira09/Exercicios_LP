#include <stdio.h>

void inicio();
void aba(char titulo[]);
void meio();
void titulo(char titulo[]);
void fim();


int main(){

    inicio();

    aba("Segunda página");

    meio();

    titulo("Usando argumentos");

    fim();


    return 0;
}

void inicio(){
    printf( "Content-type: text/html\n\n" );
    printf("<!DOCTYPE html>\n");
    printf("<html lang=\"pt-BR\">\n");
    printf("<head>\n");
    printf("<meta charset=\"UTF-8\">\n");
}
void aba(char titulo[]){
    printf("<title>%s</title>\n", titulo);
}
void meio(){
    printf("</head>\n");
    printf("<body>\n");
}
void titulo(char titulo[]){
    printf("<h1>%s</h1>\n", titulo);
}
void fim(){
    printf("</body>\n");
    printf("</html>\n");
}