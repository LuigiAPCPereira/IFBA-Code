/* 
    Escreva um programa em C, que use estas informações como entrada e, como saída,
    determine qual o ponto Luiza deverá descer e qual a distância e direção (“Inicio da Avenida” / “Fim da Avenida”), 
    Luiza deverá caminhar.

*/

#include <stdio.h>

int main() {
    
    int DistEsc, DistPonto;
    int PtAnt,PtPost,DistAnt,DistPost, resultado;
    
    printf("Digite a distância da escola e a distância do ponto: \n-> ");
    scanf("%d %d", &DistEsc, &DistPonto);
    
    PtAnt = DistEsc / DistPonto; // Calcula o ponto anterior
    
    PtPost = PtAnt + 1; // Calcula o ponto posterior
    
    DistAnt = DistEsc % DistPonto; // Calcula a distância anterior

    DistPost = DistPonto - DistAnt; // Calcula a distância posterior 
    
    (DistAnt < DistPost) ? printf("O melhor percurso é no inicio da avenida, onde é necessário caminhar %d até chegar a escola.", DistAnt) 
                         : printf("O melhor percurso é no final da avenida, onde é necessário caminhar %d até chegar a escola.", DistPost);
    
}
