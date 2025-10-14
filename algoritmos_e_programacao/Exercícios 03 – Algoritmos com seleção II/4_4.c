#include <stdio.h>

int main(void){
    float medida, perimetro, area;
    int numero;
    scanf("%d", &numero);
    if (numero == 3 || numero == 4)
        scanf("%f", &medida);
    if (numero>5)
        printf("Polígono não identificado.");
    if (numero<3)
        printf("Não é um polígono.");
    switch (numero){
        case 3:
            printf("Triângulo\n");
            perimetro = medida*numero;
            printf("%.1f (perímetro)", perimetro);
            break;
        case 4:
            printf("Quadrado\n");
            area = medida*medida;
            printf("%.1f (área)", area);
            break;
        case 5:
            printf("Pentágono");
            break;
    }    
}
