/*
    QUESTÃO 18
    Escreva um programa que permute o valor de duas variáveis inteiras
*/
#include <stdio.h>

int main() {
    int valor1, valor2, aux;
    
    printf("[Q] Digite o primeiro valor: \n-> ");
    scanf("%i", &valor1);
    printf("[Q] Digite o segundo valor: \n-> ");
    scanf("%i", &valor2);
    
    aux = valor1;
    valor1 = valor2;
    valor2 = aux;
    
    printf("[R] Os valores permutados são: \n Valor 1: %i \t Valor 2: %i", valor1, valor2);
}
