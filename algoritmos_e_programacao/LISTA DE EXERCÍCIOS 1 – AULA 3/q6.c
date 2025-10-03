#include <stdio.h>

int main(){
	float valor;
	printf("Digite o valor:\n");
	scanf("%f", &valor);
	if (valor > 10){
		printf("Seu valor é maior que 10!");
	}
	else{
		printf("Seu valor não é maior que 10...");
	}
}
