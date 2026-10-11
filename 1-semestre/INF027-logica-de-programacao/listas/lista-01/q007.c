/*
    Converter uma idade informada em dias para anos, meses e dias.
*/
#include <stdio.h>

int main(){
    
    int idade, anos, meses, dias;
    
    printf("[Q] Digite a idade em dias: \n-> ");
    scanf("%d", &idade);
    
    if (idade >= 0) {
        anos = idade / 365;
        dias = idade % 365;
        meses = dias / 30;
        dias = dias % 30;
    } else {
        printf("[ERRO] A idade não pode ser menor ou igual a zero. ");
    }
    
    printf("[R] Idade: %d = %d anos, %d meses e %d dias.", idade, anos, meses, dias);
}
