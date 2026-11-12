/*
    QUESTÃO 24
    Escreva um programa que leia três números e mostre o maior entre eles
*/

#include <stdio.h>

int main() {
    
    int a, b, c;
    
    printf("[Q] Digite três números: ");
    scanf("%i %i %i", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("[R] O número %i é o maior", a);
    } else if (b > a && b > c) {
        printf("[R] O número %i é o maior", b);
    } else if (c > a && c > b) {
        printf("[R] O número %i é o maior", c);
    }
    
}
