#include <stdio.h>

int main(void){
  int i, n;
  float S;
  S=0;
  scanf("%d", &n);

  for(i = 1; i <= n; i++){
      S = S + ((float)i*4-(((i+1)%2)+3))/((((float)i-1)*2)+1);
      printf("%f\n", S);
  }
}
