#include <stdio.h>

int main(){
    int numero;
    int par = 0;
    printf("Digite um número inteiro:\n");
    scanf("%d", &numero);
    
    while (par == 0){
        float temp = numero;
        int numerometade = numero/2;
        temp = temp/2;
        if (temp > numerometade || temp < numerometade){
            par = 1;
        }
        else if (temp == numerometade){
            par = 2;
        }
    }
    
    if (numero > 0)
        printf("Esse número é positivo ");
    else if (numero == 0)
        printf("Esse número é zero ");
    else if (numero < 0)
        printf("Esse número é negativo ");
    
    if (par == 1)
        printf("e ímpar.");
    else if (par == 2)
        printf("e par.");
}
