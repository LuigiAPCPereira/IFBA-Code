/*
    Converter um inteiro menor que 32 para sua representação binária.
*/
#include <stdio.h>

int main() {
    
    int numero, b0,b1,b2,b3,b4,temp;
    
    printf("[Q] Digite um inteiro menor que 32: \n-> ");
    scanf("%d", &numero);
    
    temp = numero;
    b0 = numero % 2;
    numero /= 2;
    b1 = numero % 2;
    numero /= 2;
    b2 = numero % 2;
    numero /= 2;
    b3 = numero % 2;
    numero /= 2;
    b4 = numero % 2;
    numero /= 2;
    
    printf("[R] O inteiro %d em binária é: %d%d%d%d%d ", temp,b4,b3,b2,b1,b0);
}
