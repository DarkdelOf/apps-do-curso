#include <stdio.h>
#define n 10

int main(void){
    int i, V, A[n], c;
    c=0;
    
    for(i=0;i<n;i++){
        scanf("%d", &A[i]);
    }
    printf("Agora o valor V: ");
    scanf("%d", &V);
    for(i=0;i<n;i++){
        if(A[i] == V){
            c = c+1;
        }
    }
    printf("\n%d", c);
}