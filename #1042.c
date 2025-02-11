#include <stdio.h>

int main(){
    int a, b, c, high, mid , low;
    scanf("%d%d%d", &a, &b, &c);
    if((a>b)&&(a>c)){
        high = a;
    }else if((b>a)&&(b>c)){
        high = b;
    }else if((c>a)&&(c>b)){
        high = c;
    }

    if((a<b)&&(a<c)){
        low = a;
    }else if((b<a)&&(b<c)){
        low = b;
    }else if((c<a)&&(c<b)){
        low = c;
    }

    if((a<high)&&(a>low)){
        mid = a;
    }else if((b<high)&&(b>low)){
        mid = b;
    }else if((c<high)&&(c>low)){
        mid = c;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", low, mid, high, a, b, c);
    return 0;
}
