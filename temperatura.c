#include <stdio.h>

int main(void){
    float c, f;

    printf("Digite o valor em Celcius: ");
    scanf("%f", &c);

    f = ((c * 1.8)+32);
    
    printf("O valor em ºF é: %f\n", f);
    return 0; 
}