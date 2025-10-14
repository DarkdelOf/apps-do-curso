#include <stdio.h>

int main(void){
    int gremio,inter;
    scanf("%d%d", &gremio, &inter);
    if (gremio>inter){
        printf("Gremio");
    }
    else if (gremio<inter){
        printf("Inter");
    }
    else if (gremio=inter){
        printf("Empate");
    }
}
