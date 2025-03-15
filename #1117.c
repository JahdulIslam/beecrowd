#include <stdio.h>

int main(){
    float num, sum = 0.0, media;
    int i = 0;

    while(i < 2){
        scanf("%f", &num);
        if(num >= 0.0 && num <= 10.0){
            sum += num;
            i++;
        }else{
            printf("nota invalida\n");
        }
    }

    media = sum/2.0;
    printf("media = %.2f\n", media);

    return 0;
}
