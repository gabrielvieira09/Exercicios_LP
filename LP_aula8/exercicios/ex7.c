#include <stdio.h>

int main() {
    
    int n1,n2,n3,n4;
    
    printf("Digite 4 números entre 0 e 10: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    for(int y = 1; y <= n1;y++){
        
        if(y == n1){
            printf("*\n");
        }else{
            printf("*");
        }
    }
    for(int y = 1; y <= n2;y++){
       if(y == n2){
            printf("*\n");
    }else{
            printf("*");
        }
    }
    for(int y = 1; y <= n3;y++){
        if(y == n3){
            printf("*\n");
        }else{
            printf("*");
        }
    }
    for(int y = 1; y <= n4;y++){
        if(y == n4){
            printf("*\n");
        }else{
            printf("*");
        }
    }

    return 0;
}