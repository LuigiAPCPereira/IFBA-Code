/*
    QUESTÃO 23
    Informar se um número inteiro é par ou ímpar.
*/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("[Q] Digite um número: ");
    scanf("%i", &numero);
    
    if (numero % 2 == 0) {
        printf("[R] O número é par.");
    } else {
        printf("[R] O número é impar.");
    }

}
