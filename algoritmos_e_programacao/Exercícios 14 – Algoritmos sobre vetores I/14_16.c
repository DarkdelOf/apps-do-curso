/*Ler um vetor M de 10 elementos. Troque a seguir o 1o. elemento com o 6o., o 2o. com o 7o.,etc. até 
o 5o. com 10o. e escreva o vetor M assim modificado.*/

#include <stdio.h>

int main(void){
    int i, M[10], M2[10];
    
    for(i=0;i<10;i++){
        scanf("%d", &M[i]);
    }
    for(i=0;i<10;i++){
        M2[i] = M[i];
    }
    for(i=0;i<5;i++){
        M[i] = M[i+5];
        M[i+5] = M2[i];
    }
    
    for(i=0;i<10;i++){
        printf("%d  ", M[i]);
    }
}
