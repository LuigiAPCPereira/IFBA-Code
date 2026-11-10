/*

    ATIVIDADE Algoritimos de Ordenação 
            Selection Sort

*/

#include <stdio.h>
#define quantVetor 10
#define numVetor 22, 49, 5, 31, 14, 38, 1, 27, 45, 9

int main() {
    
    int vetor[quantVetor] = {numVetor};
    int iCont, jCont, posMenor, aux;
    
    for (iCont = 0; iCont < quantVetor; iCont++) {
        posMenor = iCont;
        for (jCont = iCont + 1; jCont < quantVetor; jCont++) {
            if (vetor[jCont] < vetor[posMenor]) {
                posMenor = jCont;
            }
        }
        if (posMenor != iCont) {
            aux = vetor[iCont];
            vetor[iCont] = vetor[posMenor];
            vetor[posMenor] = aux;
        }
    }
    printf("[R] Vetor ordenado: ");
    for (iCont = 0; iCont < quantVetor; iCont++) {
        printf("%i ", vetor[iCont]);
    }
}
