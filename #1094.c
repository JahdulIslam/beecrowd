#include <stdio.h>

int main(){
    int i, count, amount = 0, total = 0;
    int cCount = 0, rCount = 0, sCount = 0;
    float percentC, percentR, percentS;
    char animal;
    scanf("%d", &count);
    for(i = 1; i <= count; i++){
        scanf("%d %c", &amount, &animal);
        if(animal == 'C'){
            cCount += amount;
        }else if(animal == 'R'){
            rCount += amount;
        }else if(animal == 'S'){
            sCount += amount;
        }
    }

    total = cCount + rCount + sCount;
    percentC = ((float) cCount / total)*100.0;
    percentR = ((float) rCount / total)*100.0;
    percentS = ((float) sCount / total)*100.0;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", cCount);
    printf("Total de ratos: %d\n", rCount);
    printf("Total de sapos: %d\n", sCount);
    printf("Percentual de coelhos: %.2f %%\n", percentC);
    printf("Percentual de ratos: %.2f %%\n", percentR);
    printf("Percentual de sapos: %.2f %%\n", percentS);
    return 0;
}
