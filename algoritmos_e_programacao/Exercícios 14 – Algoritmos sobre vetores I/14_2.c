/*Preencher um vetor A de 10 elementos(índices de 0 a 9) com os números inteiros
10,20,30,40,50,...,100. Escrever o vetor A após o seu total preenchimento.*/

#include <stdio.h>

int main(void){
    int i, A[10];
    for(i=0;i<10;i++){
        A[i]=(i+1)*10;
    }
    for(i=0;i<10;i++){
        printf("Índice %d: %d\n", i, A[i]);
    }
}
