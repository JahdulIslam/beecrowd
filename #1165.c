#include <stdio.h>
#include <math.h>

int main(){
    int i, j, count, num, isPrime = 1;
    scanf("%d", &count);

    for(i = 1; i <= count; i++){
        scanf("%d", &num);
        for(j = 2; j < num; j++){
            if(num%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d eh primo\n", num);
        }else{
            printf("%d nao eh primo\n", num);
        }
        isPrime = 1;
    }
    return 0;
}

