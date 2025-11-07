/*Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que os usuário
não informará valores iguais.*/

#include <stdio.h>

int main(void){
    int i;
    float a,num,midnum,bignum;
    a = 0; midnum = 0; bignum = 0;
    for(i=1;i<=3;i++){
        scanf("%f", &num);
        if(num>midnum){
            midnum = num;
            if(midnum>bignum){
                if(bignum==0){
                    bignum = midnum;
                    midnum = 0;
                }
                else{
                    a = bignum;
                    bignum = midnum;
                    midnum = a;   
                }
            }
        }
    }
    printf("%f", bignum+midnum);
}
