#include <stdio.h>

/*
    Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu 
    perímetro. 
*/

int main (){
    float base,altura,area,perimetro;
    
    printf("Digite a base e a altura do retângulo: \n-> ");
    scanf("%f %f", &base, &altura);
    
    area = base * altura;
    perimetro = 2 * (base+altura);
    
    printf("| Área: %.2f |\tPerímetro: %.2f |", area, perimetro);
}
