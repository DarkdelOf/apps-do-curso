/*Faça um programa que leia 10 números, considere que serão lidos números
inteiros e positivos. Se o número lido for menor que 7, calcule o seu fatorial. Se
for maior ou igual a 7, calcule a soma de 1 até o número lido.*/

#include <stdio.h>

int main(void){
	int i,j,numero,result;
	for(i = 0; i < 9; i++){
		scanf("%d", &numero);
		if(numero>=7){
			result = numero;
			for(j = 0; j < numero; j++){
				result = result+j;
			}
			printf("Resultado:%d\n", result);
		}
		else{
			result = 1;
			for(j = 1; j <= numero; j++){
				result = j*result; 
			}
			printf("Resultado:%d\n", result);
		}
	}
}
