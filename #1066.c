#include <stdio.h>

int main(){
    int a, b, c, d, e;
    int evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if(a%2==0){
        evenCount += 1;
    }else{
        oddCount += 1;
    }
    if(b%2==0){
        evenCount += 1;
    }else{
        oddCount += 1;
    }
    if(c%2==0){
        evenCount += 1;
    }else{
        oddCount += 1;
    }
    if(d%2==0){
        evenCount += 1;
    }else{
        oddCount += 1;
    }
    if(e%2==0){
        evenCount += 1;
    }else{
        oddCount += 1;
    }
    if(a>0){
        posCount += 1;
    }else if(a<0){
        negCount += 1;
    }
    if(b>0){
        posCount += 1;
    }else if(b<0){
        negCount += 1;
    }
    if(c>0){
        posCount += 1;
    }else if(c<0){
        negCount += 1;
    }
    if(d>0){
        posCount += 1;
    }else if(d<0){
        negCount += 1;
    }
    if(e>0){
        posCount += 1;
    }else if(e<0){
        negCount += 1;
    }
    printf("%d valor(es) par(es)\n", evenCount);
    printf("%d valor(es) impar(es)\n", oddCount);
    printf("%d valor(es) positivo(s)\n", posCount);
    printf("%d valor(es) negativo(s)\n", negCount);
    return 0;
}
