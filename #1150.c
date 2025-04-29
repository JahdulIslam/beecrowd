#include <stdio.h>

int main(){
    int sum = 0, start, cmp, counter = 0, add;
    scanf("%d", &start);
    while (1){
        scanf("%d", &cmp);
        if (cmp > start){
            break;
        }
    }

    add = start;

    while (1){
        sum += add;
        counter++;
        if (sum > cmp){
            break;
        }else{
            add++;
        }
    }
    printf("%d\n", counter);
    return 0;
}


