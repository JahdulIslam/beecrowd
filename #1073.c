#include <stdio.h>

int main(){
    int count, i, square;
    scanf("%d", &count);
    for(i = 1;i <= count;i++){
        if(i%2==0){
          square = i*i;
          printf("%d^2 = %d\n", i, square);
        }
    }
    return 0;
}
