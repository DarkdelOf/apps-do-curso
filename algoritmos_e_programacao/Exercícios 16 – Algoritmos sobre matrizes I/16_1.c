#include <stdio.h>

int main(void){
    int A[5,5], sum, i, j;
    
    sum = 0;
    for(i=0;i<5;i++){
        sum = sum+A[i,3];
    }
    printf("%d", sum);
    
    sum = 0;
    for(i=0;i<5;i++){
        sum = sum+A[2,i];
    }
    printf("%d", sum);
    
    sum = 0;
    for(i=0;i<5;i++){
        sum = sum+A[i,i];
    }
    printf("%d", sum);
    
    sum = 0;
    for(i=0;i<5;i++){
        sum = sum+A[4-i,i];
    }
    printf("%d", sum);
    
    sum = 0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            sum = sum+A[i,j];
        }
    printf("%d", sum);
}
