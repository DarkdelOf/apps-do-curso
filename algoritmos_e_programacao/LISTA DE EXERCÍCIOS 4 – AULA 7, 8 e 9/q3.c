/*Faça um algoritmo para calcular o fatorial de um número*/

#include <stdio.h>

int main(void){
	int i;
	float valor, fatorial;
	scanf("%f", &valor);
	fatorial = 1;
	
	for(i = 1; i < valor+1; i++){
		fatorial = i * fatorial;
	}
	printf("%.0f", fatorial);
}
