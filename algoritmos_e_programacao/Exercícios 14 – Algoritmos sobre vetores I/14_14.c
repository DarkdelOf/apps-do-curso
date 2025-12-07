/* Ler um vetor Q de 10 posições (aceitar somente números positivos, se o valor informado for 
negativo ou zero a leitura deverá ser repetida). Escreva a seguir o valor do maior elemento de Q e a 
respectiva posição(índice) que ele ocupa no vetor.*/

#include <stdio.h>

int main(void){
    float Q[10], BiggestN;
    int i, Index;
    
    BiggestN = 0;
    
    for(i=0;i<10;i++){
        Q[i] = 0;
    }
    
    for(i=0;i<10;i++){
        while(Q[i]<=0){
            Q[i] = 0;
            scanf("%f", &Q[i]);
            if(Q[i]<=0){
                printf("\nNúmero inválido\n");
            }
        }
    }
    for(i=0;i<10;i++){
        if(Q[i]>BiggestN){
            BiggestN = Q[i];
            Index = i;
        }
    }
    printf("\nMaior número: %f\nÍndice do maior número: %d", BiggestN, Index);
}
