/*
    Converter uma temperatura de Fahrenheit para Celsius.
*/
#include <stdio.h>

int main() {
    
    float Fahrenheit, Celsius;
    
    printf("[Q] Digite a temperatura em Fahrenheit: \n-> ");
    scanf("%f", &Fahrenheit);
    
    Celsius = (5 * (Fahrenheit - 32)) / 9;
    
    printf("[R] A temperatura %.2f°F em Celsius é %.2f°C", Fahrenheit, Celsius);
}
