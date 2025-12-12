/*Uma operação muito comum de manipulação de strings é
conhecida como TRIM. Trata-se de uma função que recebe uma
string e remove todos os espaços no início e no fim da string.
Elabore uma função que realiza esta tarefa.*/

#include <stdio.h>
#include <string.h>

int main(void){
    char text[100],texttemp[100], i, j;
    fgets(text, 100, stdin);
    for(i=0;text[i]!='\0';i++);
    int c = i;
    j=0;
    
    for(i=0;i<c;i++){
        if(text[i]==' '){
        }
        else{
            j++;
            texttemp[j-1] = text[i];
        }
    }
    for(i=0;i<c;i++){
        text[i] = texttemp[i];
    }
    text[j] = '\0';
    printf("%s", text);
}
