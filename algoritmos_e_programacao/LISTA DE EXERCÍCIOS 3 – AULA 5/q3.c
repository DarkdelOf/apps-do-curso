#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("chcp 65001 > nul");

    float nota;
    while (1)
    {   
        nota = -2;
        if (nota > 10 || nota < 0){
            printf("Digite sua nota\n");
            scanf("%f", &nota);
                if (nota >= 0 && nota <= 5){
                    printf("Você tem conceito D nessa matéria.");
            }
                else if (nota > 5 && nota <=7){
                    printf("Você tem conceito C nessa matéria.");
            }
                else if (nota > 7 && nota <= 9){
                    printf("Você tem conceito B nessa matéria");
            }
                else if (nota > 9 && nota <= 10){
                    printf("Você tem conceito A nessa matéria");
            }
                else{
                    printf("Sua nota é inválida.\n");
                    fflush(stdout);
                    continue;
            }
        }
        
        return 0;
    }
    
    
}