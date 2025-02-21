#include <stdio.h>
#include <math.h>

int main(){
    int i, j, num;
    scanf("%d", &num);

    if(num%2 != 0){
        for(i = 1, j = num; i <= 6; i++){
            printf("%d\n", j);
            j += 2;
        }
    }else{
        for(i = 1, j = num + 1; i <= 6; i++){
            printf("%d\n", j);
            j += 2;
        }
    }

    return 0;
}

