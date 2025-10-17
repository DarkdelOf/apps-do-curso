/*Faça um algoritmo que gera e escreve os números ímpares entre 100 e 200.
Utilize a função resto para verificar se o número é impar.*/

#include <stdio.h>

int main(void){
	int i;
	for (i = 100; i != 200; i++){
		int a;
		a = i%2;
		if (a == 1){
			printf("%d, ", i);
		}
	}
}
