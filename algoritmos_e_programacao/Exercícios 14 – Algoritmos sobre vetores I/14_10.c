/*Ler um vetor C para armazenar 10 códigos e uma variável A que contenha um código. Escrever a
mensagem ACHEI se o código armazenado em A estiver no vetor C, e NÃO ACHEI caso contrário.*/

#include <stdio.h>

int main(void){
    int C[10], A, i, temvalor;
    
    printf("Escreva o A: ");
    scanf("%d", &A);
    
    printf("\nAgora escreva os 10 valores de C:\n");
    
    for(i=0;i<10;i++){
        scanf("%d", &C[i]);
    }
    temvalor = 0;
    for(i=0;i<10;i++){
        if(A==C[i]){
            temvalor = 1;
            
        }
    }
    if(temvalor==1){
        printf("ACHEI");
    }
    else{
        printf("NÃO ACHEI");
    }
}
