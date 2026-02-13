#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int a; int b;
} operacao;

int Somar(int a, int b){
    return a+b;
}

int Subtrair(int a, int b){
    return a+= -b;
}

int Multiplicar(int a, int b){
    int tempA = a;
    for(int i=1; i<b; i++){
        a = a+tempA;
    }
    
    return a;
}

void waitFor(unsigned int secs) {
  unsigned int retTime = time(0) + secs; 
  while (time(0) < retTime); 
}


double Dividir(int a, int b){
    if(b == 0){
        printf("Erro: divisão por zero.\n");
        return 0;
    }

    int inteiro = 0;
    
    while(a >= b){
        a -= b;
        inteiro++;
    }

    double resultado = inteiro;
    double decimal = 0;
    double fator = 0.1;

    for(int i = 0; i < 3; i++){
        a *= 10;
        int contador = 0;

        while(a >= b){
            a -= b;
            contador++;
        }

        decimal += contador * fator;
        fator *= 0.1;
    }

    resultado += decimal;
    return resultado;
}

operacao CaptarValores(){
    char temp[128];
    operacao op;
    
    printf("Digite o primeiro número da operação:");
    op.a = atoi(fgets(temp, sizeof(temp), stdin));
    
    printf("Digite o segundo número da operação:");
    op.b = atoi(fgets(temp, sizeof(temp), stdin));
    
    return op;
}

void Calculadora(){
    operacao a = {0, 0};
    char temp[128];
    int encerrar = 0;
    int soma = 0; int subtracao = 0; int multiplicacao = 0; double divisao = 0;
    
    while(encerrar != 1){
        printf("Escolha uma função:\n0.Captar Valores\n1.Somar\n2.Subtrair\n3.Multiplicar\n4.Dividir\n5.Encerrar\n\n");
        int choose = atoi(fgets(temp, sizeof(temp), stdin));
        switch(choose){
        case 0:
            a = CaptarValores();
            break;
        case 1:
            int soma = Somar(a.a, a.b);
            printf("\nResultado: %d\n", soma);
            waitFor(3);
            break;
        case 2:
            int subtracao = Subtrair(a.a, a.b);
            printf("\nResultado: %d\n", subtracao);
            waitFor(3);
            break;
        case 3:
            int multiplicacao = Multiplicar(a.a, a.b);
            printf("\nResultado: %d\n", multiplicacao);
            waitFor(3);
            break;
        case 4:
        double divisao = Dividir(a.a, a.b);
            printf("\nResultado: %.3lf\n", divisao);
            waitFor(3);
            break;
        case 5:
            encerrar = 1; break;
        default:
            printf("Digite um código válido.\n");
            break;
        }
    }
    
}

int main(void){
    Calculadora();
}
