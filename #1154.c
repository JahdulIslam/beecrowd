#include <stdio.h>

int main(){
    int ages, sum = 0, counter = 0;
    float average;
    while(1){
        scanf("%d", &ages);
        if (ages < 0){
            break;
        }else{
            sum += ages;
            counter++;
        }
    }
    average = (float) sum / counter;
    printf("%.2f\n", average);
    return 0;
}
