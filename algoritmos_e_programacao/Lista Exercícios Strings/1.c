/*Escreva um programa que leia um texto pelo teclado. Em
seguida, faça uma função que inverta e exiba-o na tela.
Exemplo: Para a string "Bom dia" o programa imprime "aid
moB" Obs: O objetivo é alterar os caracteres na string, não é
imprimir ao contrário!*/

#include <stdio.h>

int main(void){
    
    int i,c;
    char nometemp[100];
    char nome[100] = "Bom dia";
    for(c=0;nome[c]!='\0';c++);
    for(i=0;i<c;i++){
        nometemp[(c-1)-i] = nome[i];
    }
    printf("%s", nometemp);
}
