#include <stdio.h>

/*
  Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número 
    ou um símbolo (qualquer outro caracter, que não uma letra ou número). 
*/
int main () {
    
    char caracter;
    
    printf("Digite um caracter: \n→ ");
    scanf("%c", &caracter);
    
    /*
    A-Z: A|65 B|66 C|67 D|68 E|69 F|70 G|71 H|72 I|73 J|74 K|75 L|76
         M|77 N|78 O|79 P|80 Q|81 R|82 S|83 T|84 U|85 V|86 W|87 X|88
         Y|89 Z|90

    a-z: a|97 b|98 c|99 d|100 e|101 f|102 g|103 h|104 i|105 j|106 k|107 l|108
         m|109 n|110 o|111 p|112 q|113 r|114 s|115 t|116 u|117 v|118 w|119 x|120
         y|121 z|122
    */
    
    // Se o caracter digitado for maior igual ao valor ASCII de A e menor igual ao valor ASCII de Z soma o valor do caracter por +32
    // Exemplo: A = 65, a = 97 logo 65+32=97
    caracter = (caracter >= 'A' && caracter <= 'Z') ? caracter + 32 : caracter;
    
    if (caracter >= 'a' && caracter <= 'z'){
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        printf("↳ Seu caracter é uma vogal");
        } else {
            printf("↳ Seu caracter é uma consoante");
        }
    } else if (caracter >= '0' && caracter <= '9') {
        printf("↳ Seu caracter é um número");
    } else {
        printf("↳ Seu caracter é um símbolo");
    }
}
 
