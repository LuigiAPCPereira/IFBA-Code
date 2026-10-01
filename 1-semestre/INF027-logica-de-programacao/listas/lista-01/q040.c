#include <stdio.h>

/*
    Escreva um programa que receba um numero inteiro de -1000 a 1000 e mostre na tela o 
    numero por extenso.
*/
void especial(int numero) {
    switch (numero) {
        case 0: printf("ZERO"); break;
        case 10: printf("DEZ"); break;
        case 11: printf("ONZE"); break;
        case 12: printf("DOZE"); break;
        case 13: printf("TREZE"); break;
        case 14: printf("QUATORZE"); break;
        case 15:printf("QUINZE"); break;
        case 16:printf("DEZESSEIS"); break;
        case 17: printf("DEZESSETE"); break;
        case 18: printf("DEZOITO"); break;
        case 19: printf("DEZENOVE"); break;
        case 100: printf("CEM"); break;
        case 1000: printf("MIL"); break;
    }
}
int centena(int numero) {
    
    int centena = numero / 100;
    
    switch (centena) {
        case 1: printf("CENTO"); break;
        case 2: printf("DUZENTOS"); break;
        case 3: printf("TREZENTOS"); break;
        case 4: printf("QUATROCENTOS"); break;
        case 5: printf("QUINHENTOS"); break;
        case 6: printf("SEISCENTOS"); break;
        case 7: printf("SETECENTOS"); break;
        case 8: printf("OITOCENTOS"); break;
        case 9: printf("NOVECENTOS"); break;
    }
    if (centena != 0 && numero % 100 != 0)
        printf(" E ");
    return numero % 100;
}
int dezena(int numero) {
    
    int dezena = numero / 10;
    
    if (numero >= 10 && numero <= 19) { especial(numero); return 0; 
    } else {
        switch (dezena) {
            case 2: printf("VINTE"); break;
            case 3: printf("TRINTA"); break;
            case 4: printf("QUARENTA"); break;
            case 5: printf("CINQUENTA"); break;
            case 6: printf("SESSENTA"); break;
            case 7: printf("SETENTA"); break;
            case 8: printf("OITENTA"); break;
            case 9: printf("NOVENTA"); break;
        }
        if (dezena != 0 && numero % 10 != 0)
            printf(" E ");
    }
    return numero % 10;
}
void unidade(int numero) {
    switch(numero) {
        case 1: printf("UM"); break;
        case 2: printf("DOIS"); break;
        case 3: printf("TRÊS"); break;
        case 4: printf("QUATRO"); break;
        case 5: printf("CINCO"); break;
        case 6: printf("SEIS"); break;
        case 7: printf("SETE"); break;
        case 8: printf("OITO"); break;
        case 9: printf("NOVE"); break;
    }
}
int main() {
    
    int numero;
    
    printf("Digite um número: \n-> ");
    scanf("%i", &numero);
    if (numero >= -1000 && numero <= 1000) {
        if (numero < 0) { printf("MENOS "); numero = numero * -1;}

        if ((numero >= 10 && numero <= 19) || numero == 100 || numero == 1000) {
            especial(numero);
        } else {
            numero = centena(numero);
            numero = dezena(numero);
            unidade(numero);
    }
    } else {printf("Número fora do intervalo permitido.");}
}
