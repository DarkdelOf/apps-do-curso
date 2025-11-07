/*Escreva um algoritmo para ler 3 valores e escrevê-los em ordem crescente. Considere que os usuário
não informará valores iguais.*/

#include <stdio.h>

int main(void){
  int i;
  float a,b,num,v1,v2,v3;

  for(i=1;i<=3;i++){
    scanf("%f", &num);
    if(num > v1){
      v1 = num;
    }
      if(v1 > v2){
        a = v2;
        v2 = v1;
        v1 = a;
      }
        if(v2 > v3){
          a = v3;
          v3 = v2;
          v2 = a;
        }
  }
  printf("%.1f < %.1f < %.1f", v1,v2,v3);
}
