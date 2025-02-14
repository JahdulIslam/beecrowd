#include <stdio.h>

int main(){
    int i, count, x;
    scanf("%d", &count);
    for (i = 1; i <= count; i++) {
        scanf("%d", &x);
        if(x > 0){
            if(x % 2 == 0){
                printf("EVEN POSITIVE\n");
            }else{
                printf("ODD POSITIVE\n");
            }
        }else if(x < 0){
            if(x % 2 == 0){
                printf("EVEN NEGATIVE\n");
            }else{
                printf("ODD NEGATIVE\n");
            }
        }else{
            printf("NULL\n");
        }
    }
    return 0;
}
