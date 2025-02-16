#include <stdio.h>
#include <math.h>

int main(){
    int i, j = 7, com = 5;

    for(i = 1; i <= 9; i += 2){
        while(j >= com){
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        j += 5;
        com  += 2;
    }
    return 0;
}

