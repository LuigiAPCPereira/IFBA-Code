#include <stdio.h>

/*
    QUESTÃO 16
    Escreva um programa para gerar o invertido de um número com três algarismos
    (exemplo: o invertido de 498 é 894).

*/

int main() {
    
    int numero, centena, dezena, unidade;
    
    printf("[Inverter números] Digite um número de 3 algorismos a ser invertido: ");
    scanf("%i", &numero);
    
    centena = numero / 100;
    dezena = numero % 10;
    unidade = numero / 10  % 10;
    
    printf("[Inverter números] O número %i invertido é %i%i%i", numero, dezena, unidade, centena);
}
