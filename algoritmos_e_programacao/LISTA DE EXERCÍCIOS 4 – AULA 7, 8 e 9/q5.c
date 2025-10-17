/* A série de Fibonacci é uma sequência de números em que os dois primeiros são
0 e 1 e a partir daí cada número é a soma dos anteriores, ou seja

𝑡n = 𝑡n-1 + 𝑡n-2

Faça um algoritmo que escreve os x primeiros termos da série e a soma destes
termos. */

#include <stdio.h>

int main(void){
	int valor,i,a,b,c,soma,soma_m;
	scanf("%d", &valor);
	a = 0;
	b = 1;
	c = 0;
	for(i=0;i<valor;i++){
		soma = a + b;
		c = b;
		b = soma;
		a = c;
		printf("%d\n", soma);
		soma_m = soma+soma;
	}
	printf("\n%d SOMA", soma_m);
}
