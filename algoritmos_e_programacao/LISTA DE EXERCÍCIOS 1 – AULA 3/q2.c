#include <stdio.h>

int main(){
	int anos, meses, dias;
	printf("Diga anos, meses e dias de vida, nessa ordem.\n");
	scanf("%d%d%d", &anos,&meses,&dias);
	
	dias = dias+meses*30+anos*365;
	printf("A pessoas tem ");
	printf("%d ", dias);
	printf("dias de vida.");
}
