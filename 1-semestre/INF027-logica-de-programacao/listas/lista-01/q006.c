/*
    Ler dois inteiros e exibir quociente e resto da divisão inteira.
*/
#include <stdio.h>

int main() {
    
    int numero, divisor, quociente, resto;
    
    printf("[Q] Digite o numero e o divisor: \n-> ");
    scanf("%d %d", &numero, &divisor);
    quociente = numero / divisor;
    resto = numero % divisor;
    
    printf("[R] O quociente e o resto da equação %d/%d é %d | %d", numero, divisor, quociente, resto);
}

