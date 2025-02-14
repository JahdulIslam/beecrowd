#include <stdio.h>

int x;
void password(x);

int main(){

    password(x);

    return 0;
}

password(x){
    scanf("%d", &x);
    if(x == 2002){
        printf("Acesso Permitido\n");
    }else{
        printf("Senha Invalida\n");
        password(x);
    }
}
