/*.Reescreva o algoritmo do exercício 8.6 validando a resposta do usuário para a pergunta Novo Cálculo
(1.sim 2.não)? (aceitar apenas os código 1 ou 2).*/

#include <stdio.h>

int main(void){
    float n1,n2;
    int on;
    on = 1;
    while(on==1){
        n1 = -1; n2 = -1;
        while(n1>10 || n1<0 || n2>10 || n2<0){
            scanf("%f%f", &n1,&n2);
            if(n1>10 || n1<0 || n2>10 || n2<0){
                printf("Nota inválida\n");
            }
        }
        printf("%.1f", (n1+n2)/2);
        printf("\nNovo cálculo(1.sim 2.não)\n");
        on = 0;
        while(on!=2&&on!=1){
            scanf("%d", &on);
            if(on!=2&&on!=1){
                printf("Opção inválida\n");
            }
        }
    }
}
