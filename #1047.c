#include <stdio.h>

int main(){
    int startH, endH, startM, endM, startTime, endTime, diffTime, diffH, diffM;
    scanf("%d%d%d%d", &startH, &startM, &endH, &endM);
    startTime = startH*60 + startM;
    endTime = endH*60 + endM;

    if((startTime>endTime)||(startTime==endTime)){
        endTime += 1440;
    }
    diffTime = endTime - startTime;
    diffH = diffTime/60;
    diffM = diffTime - (diffH*60);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diffH, diffM);
    return 0;
}
