/*Reescreva o algoritmo para o problema 8.1 utilizando a estrutura FAÇA/ENQUANTO na construção
da repetição de validação.*/

#include <stdio.h>

int main(void){
    float n1,n2;
    n2 = 0;
    
    do{
        scanf("%f%f", &n1,&n2);
        if(n2==0){
            printf("\nO divisor não pode ser 0.\n");
        }
    }while(n2==0);
    printf("%.2f", n1/n2);
}
