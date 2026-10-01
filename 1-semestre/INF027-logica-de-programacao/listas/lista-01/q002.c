#include <stdio.h>

/*
    Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo. 
*/

int main(){
    
    float lado, area, perimetro;
    
    printf("Digite o lado do quadrado: \n-> ");
    scanf("%f", &lado);
    
    perimetro = 4 * lado;
    area = lado * lado;
    printf("| Área: %.2f \t| Perímetro: %.2f |", area,perimetro);
}
