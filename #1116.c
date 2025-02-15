#include <stdio.h>
#include <math.h>

int main(){
    int i, x, y, count;
    float div;
    scanf("%d", &count);

    for(i = 1; i <= count; i++){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            div = (float) x/y;
            printf("%.1f\n", div);
        }
    }
    return 0;
}
