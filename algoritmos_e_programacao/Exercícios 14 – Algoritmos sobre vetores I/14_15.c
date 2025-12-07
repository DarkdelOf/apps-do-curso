/*Ler um vetor U de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o. com o 
penúltimo, etc. até o 5o. com o 6o. e escreva o vetor U assim modificado*/

#include <stdio.h>

int main(void){
    int i, U[10], U2[10];
    
    for(i=0;i<10;i++){
        scanf("%d", &U[i]);
    }
    for(i=0;i<10;i++){
        U2[i] = U[i];
    }
    for(i=0;i<5;i++){
        U[i] = U[9-i];
        U[9-i] = U2[i];
    }
    for(i=0;i<10;i++){
        printf("%d  ", U[i]);
    }
}
