#include <stdio.h>

int main(){
    float n1,n2,media;
    scanf("%f%f", &n1,&n2);
    media = (n1+n2)/2;
    printf("%.1f (média)\n", media);
    
    if (media>=7){
        printf("Aprovado");
    }
    else if (media<7 && media>=3){
        printf("em Exame");
    }
    else if (media<3){
        printf("Reprovado");
    }
}
