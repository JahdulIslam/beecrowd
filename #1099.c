#include <stdio.h>
#include <math.h>

int main(){
    int i, j, count, num1, num2, sum = 0;
    scanf("%d", &count);
    for(j = 1; j <= count; j++){
        scanf("%d %d", &num1, &num2);
        if(num1 < num2){
            if(num1%2 != 0){
                for(i = num1 + 2; i < num2; i += 2){
                    sum += i;
                }
            }else{
                for(i = num1 + 1; i < num2; i += 2){
                    sum += i;
                }
            }
        }else{
            if(num2%2 != 0){
                for(i = num2 + 2; i < num1; i += 2){
                    sum += i;
                }
            }else{
                for(i = num2 + 1; i < num1; i += 2){
                    sum += i;
                }
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}

