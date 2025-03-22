#include <stdio.h>

int main(){
    int i, n, fac = 1;
    scanf("%d", &n);
    for(i = n; i > 0; i--){
        fac *= i;
    }
    printf("%d\n", fac);
    return 0;
}
