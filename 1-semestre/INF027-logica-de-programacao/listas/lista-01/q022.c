/*
    QUESTÃO 22
    Exibir o módulo (valor absoluto) de um número.
*/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("[Q] Digite um número: ");
    scanf("%i", &numero);
    
    if (numero >= 0) {
        printf("[R] o modulo é: %i", numero);  
    } else {
        numero = -numero;
        printf("[R] o modulo é: %i", numero);
    }

}
