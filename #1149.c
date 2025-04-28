#include <stdio.h>

int main(){
    int start, count, num, sum = 0;
    scanf("%d", &start);
    while (1){
        scanf("%d", &count);
        if (count > 0){
            break;
        }
    }
    num = start;
    for(int i = 1; i <= count; i++){
        sum += num;
        num++;
    }
    printf("%d\n", sum);
    return 0;
}


