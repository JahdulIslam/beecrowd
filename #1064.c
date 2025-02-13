#include <stdio.h>

int main(){
    float a, b, c, d, e, f;
    float posA = 0.0, posB = 0.0, posC = 0.0, posD = 0.0, posE = 0.0, posF = 0.0, avg;
    int counter = 0;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    if(a>0.0){
        posA = a;
        counter += 1;
    }
    if(b>0.0){
        posB = b;
        counter += 1;
    }
    if(c>0.0){
        posC = c;
        counter += 1;
    }
    if(d>0.0){
        posD = d;
        counter += 1;
    }
    if(e>0.0){
        posE = e;
        counter += 1;
    }
    if(f>0.0){
        posF = f;
        counter += 1;
    }
    avg = (posA + posB + posC + posD + posE + posF)/counter;
    printf("%d valores positivos\n", counter);
    printf("%.1f\n", avg);
    return 0;
}
