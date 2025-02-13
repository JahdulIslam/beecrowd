#include <stdio.h>

int main(){
    int count, i, num, in = 0, out = 0;
    scanf("%d", &count);
    for(i = 1;i <= count;i++){
        scanf("%d", &num);
        if((num<=20)&&(num>=10)){
            in += 1;
        }else{
            out += 1;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
