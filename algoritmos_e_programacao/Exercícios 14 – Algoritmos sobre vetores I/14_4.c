#include <stdio.h>
#define n 10

int main(void){
    int i, C[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &C[i]);
    }
    for(i=0;i<n;i++){
        if(C[i]<0){
        C[i] = 0;
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n", C[i]);
    }
}