/*Faça um algoritmo que escreva os 30 primeiros termos da série 1,3,9,27..*/

#include <stdio.h>
#include <math.h>

int main(void){
	int i,j;
	float a;
	for(i = 0; i < 30; i++){
		a = 1;
		for(j = 0; j < i; j++){
			a = a*3;
		}
		printf("%.0f\n", a);
	}
}

// alternativo:

/*Faça um algoritmo que escreva os 30 primeiros termos da série 1,3,9,27..*/
/*
#include <stdio.h>
#include <math.h>

int main(void){
	int i;
	float a;
	for(i = 0; i < 30; i++){
		a = pow(3,i);
		printf("%.0f\n", a);
	}
}
*/
