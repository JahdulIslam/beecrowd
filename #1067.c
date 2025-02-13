#include <stdio.h>

int main(){
    int end, i;
    scanf("%d", &end);
    for(i = 1;i<=end;i+=2){
        printf("%d\n", i);
    }
    return 0;
}
