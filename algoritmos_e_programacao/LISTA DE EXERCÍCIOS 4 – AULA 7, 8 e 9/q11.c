#include <stdio.h>
#include <math.h>

int main(void){
  int i,x;
  float S;
  S = 0;
  scanf("%d", &x);
  for(i = 1; i <= 20; i++){
    S = S + i/pow(x,i);
    printf("%f\n", S);
  }
  printf("%f", S);
}
