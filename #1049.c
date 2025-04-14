#include <stdio.h>
#include <string.h>
int main(){
    char phylum[20], type[20], diet[20];
    gets(phylum);
    gets(type);
    gets(diet);

    if(strcmp(phylum,"vertebrado")==0){
        if(strcmp(type, "ave")==0){
            if(strcmp(diet, "carnivoro")==0){
                printf("aguia\n");
            }else if(strcmp(diet, "onivoro")==0){
                printf("pomba\n");
            }
        }else if(strcmp(type, "mamifero")==0){
            if(strcmp(diet, "onivoro")==0){
                printf("homem\n");
            }else if(strcmp(diet, "herbivoro")==0){
                printf("vaca\n");
            }
        }
    }else if(strcmp(phylum, "invertebrado")==0){
       if(strcmp(type, "inseto")==0){
            if(strcmp(diet, "hematofago")==0){
                printf("pulga\n");
            }else if(strcmp(diet, "herbivoro")==0){
                printf("lagarta\n");
            }
        }else if(strcmp(type, "anelideo")==0){
            if(strcmp(diet, "onivoro")==0){
                printf("minhoca\n");
            }else if(strcmp(diet, "hematofago")==0){
                printf("sanguessuga\n");
            }
        }
    }

    return 0;
}
