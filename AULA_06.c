#include <stdio.h>

int main(){
    //Format specifier % = Define e formata um tipo de dados a serem exibidos

    // %c  = character
    // %s  = string (array of characters)
    // %f  = float
    // %lf = double
    // %d  = integer(inteiro, decimal)

    // %.1 = precisão decimal
    // %1  = tamanho do espaçamento
    // %-  = alinhar à esquerda

    float item1 = 5.75;    
    float item2 = 10.00; 
    float item3 = 100.99;
    
    printf("item 1: R$%10.2f\n", item1);   //
    printf("item 2: R$%9.2f\n", item2);    //alinhados à direita
    printf("item 3: R$%8.2f\n", item3);    //

    return 0;
}
