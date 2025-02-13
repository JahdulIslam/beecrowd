#include <stdio.h>

int main(){
    int a, b, c, d, e;
    int counter = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if(a%2==0){
        counter += 1;
    }
    if(b%2==0){
        counter += 1;
    }
    if(c%2==0){
        counter += 1;
    }
    if(d%2==0){
        counter += 1;
    }
    if(e%2==0){
        counter += 1;
    }
    printf("%d valores pares\n", counter);
    return 0;
}
