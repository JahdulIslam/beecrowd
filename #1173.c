#include <stdio.h>

int main(){
    int i, j;
    int n[10];
    scanf("%d", &j);
    for(i = 0; i < 10; i++){
        n[i]=j;
        printf("N[%d] = %d\n", i, n[i]);
        j *= 2;
    }
    return 0;
}
