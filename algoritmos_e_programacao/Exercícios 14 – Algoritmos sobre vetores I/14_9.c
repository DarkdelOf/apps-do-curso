/*Ler um vetor B de 10 elementos e um valor X. Escreva as posições (índices) do vetor B em que
aparece um valor igual a X.*/

#include <stdio.h>

int main(void){
    int B[10],X,i;
    
    printf("Escreva o X: ");
    scanf("%d",&X);
    
    printf("Agora escreva os 10 valores de B:\n");
    
    for(i=0;i<10;i++){
        scanf("%d", &B[i]);
    }
    for(i=0;i<10;i++){
        if(X==B[i]){
            printf("%d  ",i);
        }
    }
}
