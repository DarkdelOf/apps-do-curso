/*Ler um vetor X de 10 elementos. A seguir copie todos os valores negativos de vetor X para o vetor
R (sem deixar elementos vazios entre os valores copiados). Escrever o vetor R*/

#include <stdio.h>

int main(void){
    int X[10], R[10], i, j;
    
    for(i=0;i<10;i++){
        scanf("%d", &X[i]);
    }
    j=0;
    for(i=0;i<10;i++){
        if(X[i]<0){
            R[j] = X[i];
            j++;
        }
    }
    for(i=0;i<j;i++){
        printf("%d  ",R[i]);
    }
}
