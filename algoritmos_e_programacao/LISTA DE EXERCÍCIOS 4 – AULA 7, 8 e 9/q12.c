#include <stdio.h>

int main(void){
  int i;
  float S;
  
  S = 0;

  for (i = 1; i <= 50; i++){
    S = S + ((((float)i-1)*2)+1)/(float)i;
    printf("%f\n", S);
  }
}
