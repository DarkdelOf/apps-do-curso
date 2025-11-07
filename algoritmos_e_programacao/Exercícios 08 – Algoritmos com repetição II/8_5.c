/*Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcular e imprimir a
média semestral. Faça com que o algoritmo só aceite notas válidas( uma nota válida deve pertencer ao
intervalo [0,10]. Cada nota deve ser validada separadamente. Deve ser impressa a mensagem "Nota
inválida" caso a nota informada não pertença ao intervalo [0,10]*/

#include <stdio.h>

int main(void){
    float n1,n2;
    n1 = -1; n2 = -1;
    while(n1>10 || n1<0 || n2>10 || n2<0){
        scanf("%f%f", &n1,&n2);
        if(n1>10 || n1<0 || n2>10 || n2<0){
            printf("Nota inválida\n");
        }
    }
    printf("%.1f", (n1+n2)/2);
}
