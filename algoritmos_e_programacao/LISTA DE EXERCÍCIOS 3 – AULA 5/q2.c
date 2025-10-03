#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("chcp 65001 > nul"); // força o terminal a usar UTF-8

    float numero;
    scanf("%f", &numero);
    if (numero > 0)
        printf("O número %.2f é positivo.", numero);
    if (numero == 0)
        printf("O número %.2f é igual a zero.", numero);
    if (numero < 0)
        printf("O número %.2f é negativo.", numero);
}