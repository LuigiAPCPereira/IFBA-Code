/*
    Calcular a resistência equivalente de R1 e R2 em paralelo, em série com R3.
*/
#include <stdio.h>

int main() {
    float R1, R2, R3, Rp, Requivalente;
    
    printf("[Q] Digite as resistência paralelas R1, R2 e em série R3: \n-> ");
    scanf("%f %f %f", &R1,&R2,&R3);
    
    Rp = (R1 * R2) / (R1 + R2);
    Requivalente = Rp + R3;
    
    printf("[R] A resistência equivalente é: %.2f Ω", Requivalente);
}
