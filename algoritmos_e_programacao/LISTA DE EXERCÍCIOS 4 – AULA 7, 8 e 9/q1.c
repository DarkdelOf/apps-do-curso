/*Escreva um algoritmo para repetir a leitura de um número enquanto o valor
fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve
ser encerrada sem imprimir mensagem alguma.*/

#include <stdio.h>

int main(void){
	float valor;
	
	do{ scanf("%f.0", &valor);
		if (valor > 0){
			printf("POSITIVO");
		}
		if (valor < 0){
			printf("NEGATIVO");
		}
	}while(valor != 0);
}
