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
    
    if (DistAnt == 0) { printf("O melhor percurso é descer no ponto %d. Portanto, não sendo necessário caminhar.\n", PtAnt); }
    else if (DistAnt <= DistPost) { printf("O melhor percurso é descer no ponto %d e caminhar %d metros para o fim da avenida.\n", PtAnt, DistAnt); } 
    else { printf("O melhor percurso é descer no ponto %d e caminhar %d metros para o inicio da avenida.\n", PtPost, DistPost) ; }
    
}
