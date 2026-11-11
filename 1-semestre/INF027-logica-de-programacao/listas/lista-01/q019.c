/*
    QUESTÃO 19 
    Calcular a raiz de uma equação do primeiro grau.
*/
#include <stdio.h>

int main()
{
    float x;
    float a,b;
    // Equação de primeiro grau se da por: x = - (b / a)
    
    printf("[Q] Digite o valor de a: ");
    scanf("%i", &a);
    printf("[Q] Digite o valor de b: ");
    scanf("%i", &b);
    
    x = - (b / a);
    
    printf("[R] A raiz dessa equação de primeiro grau é: %.2f", x);
}
