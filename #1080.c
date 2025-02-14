#include <stdio.h>

int main(){
    int i, x, highest = 0, position;

    for(i = 1; i <= 100; i++){
        scanf("%d", &x);
        if(highest < x){
            highest = x;
            position = i;
        }
    }
    printf("%d\n", highest);
    printf("%d\n", position);
    return 0;
}
