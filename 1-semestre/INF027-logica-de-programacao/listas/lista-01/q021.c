/*
    QUESTÃO 21
    Informar se um número lido é positivo ou negativo.
*/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("[Q] Digite um número: ");
    scanf("%i", &numero);
    
    if (numero > 0)
        printf("[R] Esse número é positivo.");
        
    if (numero < 0)
        printf("[R] Esse número é negativo.");
}
