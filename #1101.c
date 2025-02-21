#include <stdio.h>

void sum(int num1, int num2);

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0){
        sum(x, y);
    }
        return 0;
}

void sum(int num1, int num2){
    int j, sum = 0;
    
    if(num1 < num2){
        for(j = num1; j <= num2; j++){
            printf("%d ", j);
            sum += j;
        }
        printf("Sum=%d\n", sum);
    }else{
        for(j = num2; j <= num1; j++){
            printf("%d ", j);
            sum += j;
        }
        printf("Sum=%d\n", sum);
    }
    main();
}

