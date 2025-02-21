#include <stdio.h>

void sum(int num1, int num2);

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x != y){
        sum(x, y);
    }
        return 0;
}

void sum(int num1, int num2){
    
    if(num1 < num2){
        printf("Crescente\n");
    }else{
        printf("Decrescente\n");
    }
    main();
}

