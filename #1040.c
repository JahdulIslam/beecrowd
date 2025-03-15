#include <stdio.h>

int main(){
    float n1, n2, n3, n4, n5, media, mediaR, sum;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    sum = (n1*2.0 + n2*3.0 + n3*4.0 + n4*1.0);
    media = sum/10.0;
    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }else if(media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        mediaR = (media + n5)/2.0;
        if(mediaR >= 5.0){
            printf("Aluno aprovado.\n");
        }else if(mediaR <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediaR);
    }

    return 0;
}
