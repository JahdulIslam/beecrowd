#include <stdio.h>

int main(){
    int i;
    double x;
    double n[100];
    scanf("%lf", &x);
    for(i = 0; i < 100; i++){
        n[i] = x;
        printf("N[%d] = %.4lf\n", i, n[i]);
        x /= 2.0;
    }
    return 0;
}
