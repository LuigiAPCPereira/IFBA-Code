/*

    ATIVIDADE Algoritimos de Ordenação 
            Busca Sequencial
*/

#include <stdio.h>
#define quantVetor 10
#define numVetor 3, 8, 12, 17, 21, 28, 34, 39, 44, 50

int main() {
    
    int vetor[quantVetor] = {numVetor};
    int escolha, iCont;
    int encontrou = 0;
    
    printf("[Q] Digite um número para procurar: ");
    scanf("%i", &escolha);
    
    for (iCont = 0; iCont < quantVetor; iCont++) {
        if (escolha == vetor[iCont]) {
            encontrou = 1;
            printf("[R] O número %i está na posição do %i vetor.", escolha, iCont);
            break;
        }
        }
        if (encontrou == 0) {
            printf("Número não encontrado.");
    }
}
