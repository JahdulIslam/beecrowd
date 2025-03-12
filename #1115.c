#include <stdio.h>

void quadrant(int x, int y);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a != 0 && b != 0){
        quadrant(a, b);
    }
    return 0;
}

void quadrant(x, y){
    if(x > 0 && y > 0){
        printf("primeiro\n");
    }else if(x > 0 && y < 0){
        printf("quarto\n");
    }else if(x < 0 && y < 0){
        printf("terceiro\n");
    }else if(x < 0 && y > 0){
        printf("segundo\n");
    }
    main();
}
