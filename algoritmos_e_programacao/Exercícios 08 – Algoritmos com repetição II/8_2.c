/*Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo. Escreva um
algoritmo para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo.

OBS: O algoritmo deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for
fornecido um valor nulo a leitura deve ser repetida. Utilize a estrutura ENQUANTO na construção da
repetição de validação.*/

#include <stdio.h>

int main(void){
    float n1,n2;
    n2 = 0;
    while(n2 == 0){
        scanf("%f%f", &n1,&n2);
        if(n2==0){
            printf("\nO divisor não pode ser 0.\n");
        }
    }
    printf("%.2f", n1/n2);
}
