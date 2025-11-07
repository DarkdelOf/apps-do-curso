/*Altere a solução do exercício 8.3 para que seja impressa a mensagem Valor inválido caso o segundo
valor informado seja 0.*/

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
