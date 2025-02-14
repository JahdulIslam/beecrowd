#include <stdio.h>

void average();

int main(){
    int i, count;
    float x, y, z, avg;
    scanf("%d", &count);

    for(i = 1; i <= count; i++){
        scanf("%f%f%f", &x, &y, &z);
        avg = (x*2.0 + y*3.0 + z*5.0)/(2.0 + 3.0 + 5.0);
        printf("%.1f\n", avg);
    }
    return 0;
}
