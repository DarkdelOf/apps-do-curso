/*Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o
quadrante ao qual o ponto pertence. Se o ponto estiver sobre os eixos, ou na origem, escrever NÃO ESTÁ
EM NENHUM QUADRANTE. Considere que o usuário poderá informar qualquer valor para as
coordenadas.*/

#include <stdio.h>

int main(void){
    float x,y;
    int quad;
    
    scanf("%f%f", &x,&y);
    
    if(x == 0 || y == 0){
        printf("NÃO ESTÁ EM NENHUM QUADRANTE.");
    }
    else{
        if(x>0){
            if(y>0){
                quad = 1;
            }
            else if(y<0){
                quad = 4;
            }
        }
        else if(x<0){
            if(y>0){
                quad = 2;
            }
            else if(y<0){
                quad = 3;
            }
        }
        printf("Está no quadrante: %d", quad);
    }
}
