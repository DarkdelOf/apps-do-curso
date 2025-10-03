#include <stdio.h>;
#include <locale.h>;
#include <stdlib.h>;

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("chcp 65001 > nul");

    float A,B,C;
    int i;
    printf("Digite o tamanho de 3 lados de um triângulo:\n");
    for (i = 0; i < 3; i++){
        if (i == 0){
            printf("Digite o valor de A: ");
            scanf("%f", &A);
        }
        if (i == 1){
            printf("Digite o valor de B: ");
            scanf("%f", &B);
        }
        if (i == 2){
            printf("Digite o valor de C: ");
            scanf("%f", &C);
        }
    
    }

    if (A < (B+C) && B < (C+A) && C < (A+B)){
        printf("O seu triângulo é, de fato um triângulo!");
    }
    else{
        printf("Seu triângulo não atende os requisitos de triângulo...");
    }
}