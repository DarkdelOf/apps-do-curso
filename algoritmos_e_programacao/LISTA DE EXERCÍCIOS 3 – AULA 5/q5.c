#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  system("chcp 65001 > nul");
  
	float idade;
	
	printf("Digite a idade do nadador:\n");
	scanf("%f", &idade);
	
	if (idade >= 5 && idade < 8){
		printf("Nadador categoria Infantil A.");
	}
	else{
		if (idade <= 11){
			printf("Nadador categoria Infantil B.");
		}
		else{
			if (idade <= 14){
				printf("Nadador categoria Juvenil A.");
			}
			else{
				if (idade <= 17)
					printf("Nadador categoria Juvenil B.");
				else{
					printf("Nadador categoria Adulto.");
				}
			}
		}
	}
}
