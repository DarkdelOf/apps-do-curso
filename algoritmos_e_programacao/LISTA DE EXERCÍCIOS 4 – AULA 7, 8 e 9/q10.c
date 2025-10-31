#include <stdio.h>

int main(void){
	int i, n;
	float soma;
	soma = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		soma = soma + 1/(float)i;
	}
	printf("%f", soma);
}
