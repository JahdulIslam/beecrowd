#include <stdio.h>

int main(){
    int a, b, c, d, e, f, counter = 0;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

    if(a>0){
        counter += 1;
    }
    if(b>0){
        counter += 1;
    }
    if(c>0){
        counter += 1;
    }
    if(d>0){
        counter += 1;
    }
    if(e>0){
        counter += 1;
    }
    if(f>0){
        counter += 1;
    }
    printf("%d valores positivos\n", counter);
    return 0;
}
