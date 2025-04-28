#include <stdio.h>

int main(){
    int alcool = 0, gasolina = 0, diesel = 0;
    int code;
    while(1){
        scanf("%d", &code);
        if (code == 1){
            alcool++;
        }else if (code == 2){
            gasolina++;
        }else if (code == 3){
            diesel++;
        }else if (code == 4){
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}


