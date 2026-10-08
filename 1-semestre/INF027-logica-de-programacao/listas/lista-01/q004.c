/* 
    Dado os três lados de um triângulo determinar o perímetro do mesmo.
*/

#include <stdio.h>

int main() {
    
    float triA,TriB,TriC,perimetro;
    
    printf("[Q] Digite os valores de cada lado de um triângulo: \n-> ");
    scanf("%f %f %f", &triA, &TriB, &TriC);
    
    perimetro = triA + TriB + TriC;
    
    printf("[R] O perímetro desse triângulo é %.2f, pois: %.2f + %.2f + %.2f = %.2f", perimetro,triA,TriB,TriC);
}
