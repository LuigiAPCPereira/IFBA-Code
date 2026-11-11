/*
    QUESTÃO 20
    Dividir o preço de uma mercadoria em entrada e duas prestações inteiras iguais conforme as regras propostas.
*/
#include <stdio.h>

int main()
{
    float valor, entrada;
    int prestacao;
    
    printf("[MERCADORIA] Digite o valor da mercadoria(R$): ");
    scanf("%f", &valor);
    
    prestacao = (int)valor / 3;
    entrada = valor - (2 * prestacao);
    printf("[MERCADORIA] Sua entrada e as duas prestações dessa compra é: \n\n");
    printf("\n Valor da mercadoria: R$%.2f", valor);
    printf("\n Valor da entrada: R$%.2f", entrada);
    printf("\n Valor da das prestações: R$%d | R$%d", prestacao, prestacao);
}
