#include <stdio.h>

int main(){
	float b, n, v, total, bpc, npc, vpc;
	printf("Insira o valor de votos brancos, nulos e, então, válidos:\n");
	scanf("%f%f%f", &b,&n,&v);
	
	total = b+n+v;
	bpc = b/total*100;
	npc = n/total*100;
	vpc = v/total*100;
	
	printf("A porcentagem de votos é:\nBrancos: %.3f\nNulos: %.3f\nVálidos: %.3f", bpc, npc, vpc);
}
