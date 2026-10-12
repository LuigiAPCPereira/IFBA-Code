/*
    Faça um algoritmo para calcular a nota semestral de um aluno. 
    A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. 
    Cada nota de bimestre é composta por 2 notas de provas.
    
*/
#include <stdio.h>

int main() {
    
    float bnota1,bnota2,bnota3,bnota4,media1,media2,mediafinal;
    
    printf("[Q] Informe suas notas das duas provas dos dois bimestres: \n-> ");
    scanf("%f %f %f %f", &bnota1,&bnota2,&bnota3,&bnota4);
    
    media1 = (bnota1 + bnota2) / 2;
    media2 = (bnota3 + bnota4) / 2;
    mediafinal = (media1 + media2) / 2;
    
    printf("[R] A nota semestral é %.2f", mediafinal);
}
