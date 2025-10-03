#include <stdio.h>

int main(){
	float v1,v2;
	printf("Insira 2 valores:\n");
	scanf("%f%f", &v1,&v2);
	if (v1 > v2){
		printf("%.1f é maior que %.1f!", v1,v2);
	}
	else if (v1 < v2){
		printf("%.1f é maior que %.1f!", v2,v1);
	}
	else if (v1 == v2){
		printf("%.1f é igual a %.1f!", v1, v2);
	}
	else{
		printf("O valor é inválido.");
	}
}
