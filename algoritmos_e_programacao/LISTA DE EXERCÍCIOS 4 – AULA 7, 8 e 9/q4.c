/*Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada
de 10 a 1 do valor lido.*/

#include <stdio.h>

int main(void){
	int i;
	float valor, print;
	do{
		scanf("%f", &valor);
	}while(valor < 1 || valor > 10);
	
	for(i = 1; i == 10; i++){
		print = valor*i;
		printf("%.0f\n", print);
	}
}
