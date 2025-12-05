/*Ler um vetor que contenha as notas de uma turma de 10 alunos. Calcular a média da turma e contar
quantos alunos obtiveram nota acima da média. Escrever a média e o resultado da contagem.*/

#include <stdio.h>
#define alunos 10

int main(void){
    float A[alunos], AcM, M;
    int i;
    
    for(i=0;i<alunos;i++){
        scanf("%f",&A[i]);
    }
    for(i=0;i<alunos;i++){
        M = M+A[i];
    }
    M = M/alunos;
    
    for(i=0;i<alunos;i++){
        if(A[i]>M){
            AcM++;
        }
    }
    printf("Média: %.1f\n", M);
    printf("Alunos acima da média: %.0f", AcM);
}
