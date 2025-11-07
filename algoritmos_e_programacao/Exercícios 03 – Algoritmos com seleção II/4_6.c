/*Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que os usuário não
informará valores iguais.*/

#include <stdio.h>

int main(void){
  int i;
  float bignum, num;
  num = 0; bignum = 0;
  
  for(i = 1; i<=3; i++){
    scanf("%f", &num);
    if (num > bignum){
      bignum = num;
    }
  }
  printf("%f", bignum);
}
