#include <stdio.h>

/*
    QUESTÃO 15
    Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
    suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
    chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
    calcular a altura do prédio

*/

int main() {
    
    float altura, sombraPessoa, sombraPredio, alturaPredio;
    
    printf("[Calculadora da Altura do Prédio] Digite a sua altura: ");
    scanf("%f", &altura);
    printf("[Calculadora da Altura do Prédio] Digite o comprimento da sua sombra: ");
    scanf("%f", &sombraPessoa);
    printf("[Calculadora da Altura do Prédio] Digite o comprimento da sombra do prédio: ");
    scanf("%f", &sombraPredio);
    
    alturaPredio = altura * sombraPredio / sombraPessoa;
    
    printf("[Calculadora da Altura do Prédio] O prédio possui %.0f metros de altura.", alturaPredio);
}
