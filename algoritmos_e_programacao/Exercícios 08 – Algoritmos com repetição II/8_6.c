/* .Reescreva o algoritmo para o problema 8.5 para que no final seja impressa a mensagem Novo cálculo
(1.sim 2.não) solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não
executar o algoritmo novamente. Se for informado o código 1 deve ser repetida a execução de todo o
algoritmo para permitir um novo cálculo, caso contrário ele deve ser encerrado. */

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
