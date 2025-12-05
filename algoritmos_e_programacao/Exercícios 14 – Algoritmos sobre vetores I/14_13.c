/*Ler 2 vetores: R de 5 elementos e S de 10 elementos. Gere um vetor X de 15 elementos cuja as 5
primeiras posições contenha os elementos de R e as 10 últimas posições os elementos de S. Escrever o
vetor X.*/

#include <stdio.h>

int main(void){
    int R[5], S[10], X[15], i;
    
    for(i=0;i<5;i++){
        scanf("%d",&R[i]);
    }
    for(i=0;i<10;i++){
        scanf("%d",&S[i]);
    }
    for(i=0;i<15;i++){
        if(i<5){
            X[i] = R[i];
        }
        if(i>=5 && i<15){
            X[i] = S[i-5];
        }
    }
    for(i=0;i<15;i++){
        printf("%d  ", X[i]);
    }
}
