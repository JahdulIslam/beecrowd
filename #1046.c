#include <stdio.h>

int main(){
    int start, end, diff;
    scanf("%d%d", &start, &end);
    if((start>end)||(start==end)){
        end += 24;
        diff = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", diff);
    }else if(start<end){
        diff = end -start;
        printf("O JOGO DUROU %d HORA(S)\n", diff);
    }

    return 0;
}
