#include <stdio.h>

int main(void){
    float v1,v2,result;
    int oprtr;
    scanf("%f%f%d", &v1,&v2,&oprtr);
    
    switch(oprtr){
        case 1:
            result = v1 + v2;
            break;
        case 2:
            result = v1 - v2;
            break;
        case 3:
            result = v1 / v2;
            break;
        case 4:
            result = v1 * v2;
            break;
    }
    printf("%.1f", result);
}
