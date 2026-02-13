#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QNT_FUNC 2

typedef struct{
    int dia; int mes;
} data;

typedef struct{
    char nome[128];
    data aniversario;
} funcionario;

typedef struct{
    funcionario f[QNT_FUNC];
} lista_funcionario;

data lerData(){
    data h; char temp[16];
    
    printf("Digite o dia:\n");
    h.dia = atoi(fgets(temp, sizeof(temp), stdin));
    printf("Digite o mes:\n");
    h.mes = atoi(fgets(temp, sizeof(temp), stdin));
    
    return h;
}

funcionario lerFuncionario(){
    funcionario f;
    
    printf("Digite o nome do funcionário:\n");
    fgets(f.nome, sizeof(f.nome), stdin);
    f.nome[strcspn(f.nome, "\n")] = '\0';
    printf("Digite o aniversário do funcionário:\n");
    f.aniversario = lerData();
    
    return f;
}

void mostraAniversariante(lista_funcionario c, data h){
    int qnt_aniversariantes = 0;
    
    for(int i=0; i<QNT_FUNC; i++){
        if(h.dia == c.f[i].aniversario.dia && h.mes == c.f[i].aniversario.mes){
            qnt_aniversariantes++;
            
            printf("O funcionário %s fez aniversário hoje!\n", c.f[i].nome);
        }
    }
    if(qnt_aniversariantes == 0){
        printf("Ninguém faz aniversário hoje.");
    }
}

int main(void){
    lista_funcionario *c;
    
    printf("Que dia é hoje?\n");
    data h = lerData();
    for(int i = 0; i<QNT_FUNC; i++){
        c->f[i] = lerFuncionario();
    }
    
    mostraAniversariante(*c, h);
}
