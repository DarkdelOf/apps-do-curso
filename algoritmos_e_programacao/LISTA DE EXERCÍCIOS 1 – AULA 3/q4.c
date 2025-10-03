#include <stdio.h>

int main(){
	float cfab, pctdist, impostos, cfinal;
	pctdist = 0.28;
	impostos = 0.45;
	
	printf("Digite o custo de fábrica do carro: \n");
	scanf("%f", &cfab);
	
	cfinal = cfab+cfab*pctdist+cfab*impostos;
	
	printf("O custo final é de %.2f", cfinal);
}
