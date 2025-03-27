#include <stdio.h>
#include <string.h>
int main(){
    int n, avenger[100], force;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%s %d", avenger, &force);
        if(strcmp(avenger, "Thor") == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }

    return 0;
}
