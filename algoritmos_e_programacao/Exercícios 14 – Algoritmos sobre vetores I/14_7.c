#include <stdio.h>
#define n 10

int main(void){
    int i, t, Z[n], W[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &Z[i]);
    }
    for(i=0;i<n;i++){
        t = n-i-1;
        W[t] = Z[i];
    }
    for(i=0;i<n;i++){
        printf("%d\n", W[i]);
    }
}