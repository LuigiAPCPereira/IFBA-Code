/*
    QUESTÃO 25
    Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de
    dias deste mês
*/

#include <stdio.h>

int main() {
    
    int mes, dias;
    
    printf("[Q] Digite o número equivalente ao mês [1 a 12]: ");
    scanf("%i", &mes);
    
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        dias = 31;
        printf("[R] Esse mês tem: %i dias\n", dias);
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
        printf("[R] Esse mês tem: %i dias\n", dias);
    } else if (mes == 2) {
        dias = 28; // Ano de referência 2026
        printf("[R] Esse mês tem: %i dias\n", dias);
    } else {
        printf("[R] Mês invalido.");
    }
    
}
