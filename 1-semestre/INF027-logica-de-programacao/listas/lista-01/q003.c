#include <stdio.h>
#define PI 3.14

/*
    Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
*/

int main() {
    
    float raio, area, perimetro;
    
    printf("Digite o tamanho do raio de uma circunferência: \n-> ");
    scanf("%f", &raio);
    
    area = PI * (raio * raio);
    perimetro = 2 * PI * raio;
    
    printf("| Área: %.2f \t| Perímetro: %.2f", area, perimetro);
}
