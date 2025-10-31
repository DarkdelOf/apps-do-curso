#include <stdio.h>

int main(void){
	int i;
	float soma;
	soma = 0;
	for(i = 1; i <= 100; i++){
		soma = soma + 1/(float)i;
	}
	printf("\nResultado: %f", soma);
}
