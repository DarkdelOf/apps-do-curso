/*Faça um programa que solicite ao usuário 10 números inteiros e, ao final,
informe a quantidade de números ímpares e pares lidos. Calcule também a soma
dos números pares e a média dos números ímpares*/

#include <stdio.h>

int main(void){
	int i,a,pares,impares,numero,nimp,npar;
	pares = 0; impares = 0; npar = 0; nimp = 0;
	for(i = 0; i <= 9; i++){
		scanf("%d", &numero);
		a = numero%2;
		if(a == 0){
			pares = pares+numero;
			npar = npar+1;
		}
		else{
			impares = impares+numero;
			nimp = nimp+1;
		}
	}
	printf("Números ímpares:%d\nSoma dos ímpares:%d\nNúmeros pares:%d\nSoma dos pares:%d\n", nimp, impares, npar, pares);
}
