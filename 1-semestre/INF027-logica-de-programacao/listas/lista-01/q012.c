/*
    Algoritimo que converte velocidade em m/s para km/h
*/
#include <stdio.h>

int main() {
    float velocidade_ms, velocidade_kmh;
    
    printf("[Q] Digite á velocidade em m/s: \n-> ");
    scanf("%f", &velocidade_ms);
    
    velocidade_kmh = velocidade_ms * 3.6;
    
    printf("[R] A velocidade em Km por hora é: %.2f Km'h", velocidade_kmh);
}
