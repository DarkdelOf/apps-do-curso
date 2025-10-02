#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("chcp 65001 > nul"); // força o terminal a usar UTF-8

    float n1,n2;
    scanf("%f%f", &n1,&n2);
    if (n1 > n2)
        printf("O maior número é: %.2f", n1);
    else
        printf("O maior número é: %.2f", n2);
}