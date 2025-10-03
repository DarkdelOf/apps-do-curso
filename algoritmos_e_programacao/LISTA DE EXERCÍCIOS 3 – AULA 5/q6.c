#include <stdio.h>

int main(){
    int i, j;
    float n1,n2,n3, mfinal, notas[3];
    for (i = 0;i < 3; i++){
        printf("Digite a nota %d:\n", i+1);
        scanf("%f", &notas[i]);
    }
    for (i = 0;i < 2; i++){
        for (j = i+1; j < 3; j++){
            if (notas[i] > notas[j]){
                int temp = notas[i];
                notas [i] = notas[j];
                notas [j] = temp;
            }
        }
    }
    
    n3 = notas[0];
    n2 = notas[1];
    n1 = notas[2];
    
    mfinal = (n1*4+n2*3+n3*3)/10;
    
    char code[100];
    getchar();
    printf("Digite seu código:\n");
    fgets(code, sizeof(code), stdin);
    
    printf("\nA maior nota foi: %.1f\nAs demais foram %.1f e %.1f\nA média final é de: %.1f\n",n1,n2,n3,mfinal);
    printf("Seu código é: %s", code);
}
