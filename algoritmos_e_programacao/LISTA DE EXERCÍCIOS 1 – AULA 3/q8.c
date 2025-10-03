#include <stdio.h>

int main(){
	float valor;
	printf("Insira o valor:\n");
	scanf("%f", &valor);
	
	if (valor >= 0){
		printf("O valor é positivo.");
	}
	else
		printf("O valor é negativo.");
}
