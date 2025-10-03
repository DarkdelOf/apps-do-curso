#include <stdio.h>

int main(){
	float n1,n2,n3,mfinal;
	printf("Digite suas 3 notas: \n");
	scanf("%f%f%f", &n1,&n2,&n3);
	mfinal = (n1*2+n2*3+n3*5)/10;
	printf("Sua nota final é %.1f", mfinal);
}
