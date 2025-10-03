#include <stdio.h>

int main(){
	float L1, L2, A;
	printf("Insira os valores dos 2 lados do retângulo: ");
	scanf("%f%f", &L1,&L2);
	A = L1*L2;
	printf("A área do retângulo é ");
	printf("%.2f", A);
}
