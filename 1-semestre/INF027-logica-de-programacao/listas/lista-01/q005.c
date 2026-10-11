/*
    Ler um inteiro e exibir seu sucessor. 
*/
#include <stdio.h>

int main() {
    
    int numero, sucessor;
    
    printf("[Q] Digite um número: \n-> ");
    scanf("%d", &numero);
    sucessor = numero + 1;
    
    printf("[R] O sucessor do número %d é %d.", numero, sucessor);
}

