#include <stdio.h>

int main(){
    int count, a = 1, b = 2, c = 3;
    scanf("%d", &count);

    for(int i = 1; i <= count; i++){
        printf("%d %d %d PUM\n", a, b, c);
        a += 4;
        b += 4;
        c += 4;
    }

    return 0;
}


